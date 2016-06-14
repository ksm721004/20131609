#include "TankGameStage.h"
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#pragma warning(disable : 4996)

CTankGameStage::CTankGameStage()
{
	tgs = new CTankGameScreen();
}

CTankGameStage::~CTankGameStage()
{
}

void CTankGameStage::Init()
{
	srand((unsigned int)time(NULL));
	FILE *fp = fopen("map1.txt", "rt");
	pt = new CPlayerTank();
	for (int i = 0; i < EnemySize; i++)
	{
		et[i] = new CEnemyTank();
	}

	for (int i = 0; i < MAPY; i++)
	{
		for (int j = 0; j < MAPX; j++)
		{
			Map[j][i] = new CTerrain();
		}
	}
	boss = new CBoss();

	char ch = 0;

	for (int i = 0; i < MAPY; i++)
	{
		for (int j = 0; j < MAPX; j++)
		{
			ch = fgetc(fp);

			switch (ch)
			{
			case '0':
			case '1':
			case '2':
				Map[j][i]->pos.SetPos(j, i);
				Map[j][i]->SetState(ch-48);
				Map[j][i]->SetLife(1);
				break;
			case 'A':
				pt->pos.SetPos(j, i);
				pt->SetLife(5);
				break;
			case 'B':
				for (int k = 0; k < EnemySize; k++)
				{
					if (!(et[k]->GetLife()))
					{
						et[k]->pos.SetPos(j, i);
						et[k]->SetLife(3);
						et[k]->SetDir(rand() % 4);
						break;
					}
				}
				break;
			case 'C':
				boss->pos.SetPos(j, i);
				boss->SetLife(5);
				break;
			}
		}
		fgetc(fp);
	}

	fclose(fp);
}
void CTankGameStage::Render()
{
	if (gameState == GAME)
	{
		if (pt != nullptr)
			pt->Render();

		for (int i = 0; i < EnemySize; i++)
		{
			if (et[i] != nullptr)
			{
				et[i]->Render();
			}
		}

		for (int i = 0; i < MAPY; i++)
		{
			for (int j = 0; j < MAPX; j++)
			{
				if (Map[j][i] != nullptr)
					Map[j][i]->Render();
			}
		}
		if (boss != nullptr)
			boss->Render();
		tgs->StateScreen(stageNum, pt->GetLife(), boss->GetLife());
	}
}

void CTankGameStage::Update()
{
	if (gameState == GAME)
	{
		int num = 0;
		if (pt != nullptr)
		{
			pt->MoveBullet();
		}

		for (int i = 0; i < EnemySize; i++)
		{
			if (et[i] != nullptr)
				et[i]->Move();
		}

		for (int i = 0; i < BulletSize; i++)
		{
			CStrikeCheck::StrikeTerrainBullet(Map[pt->m_pBullet[i]->pos.GetX()][pt->m_pBullet[i]->pos.GetY()], pt->m_pBullet[i]);
			CStrikeCheck::StrikeTankTerrain(pt, Map[pt->pos.GetX()][pt->pos.GetY()]);
			for (int k = 0; k < EnemySize; k++)
			{
				CStrikeCheck::StrikeTerrainBullet(Map[et[k]->m_pBullet[i]->pos.GetX()][et[k]->m_pBullet[i]->pos.GetY()], et[k]->m_pBullet[i]);
				CEnemyAI::TerrainEnemyRotation(et[k], Map[et[k]->pos.GetX()][et[k]->pos.GetY()]);
			}
		}

		for (int i = 0; i < EnemySize; i++)
		{
			for (int j = 0; j < BulletSize; j++)
			{
				CStrikeCheck::StrikeTankBullet(pt, et[i]->m_pBullet[j]);
				CStrikeCheck::StrikeTankBullet(et[i], pt->m_pBullet[j]);
				CStrikeCheck::StrikeBossBullet(boss, et[i]->m_pBullet[j]);
			}
			CEnemyAI::RandRotation(et[i]);
			CEnemyAI::Shot(et[i]);
			if (et[i] != nullptr)
				et[i]->MoveBullet();
		}

		for (int i = 0; i < BulletSize; i++)
		{
			CStrikeCheck::StrikeBossBullet(boss, pt->m_pBullet[i]);
		}

		if (!pt->GetLife() || !boss->GetLife())
		{
			gameState = LOSE;
		}

		for (int i = 0; i < EnemySize; i++)
		{
			if (et[i]->GetLife() == 0)
			{
				num++;
			}
			if (num == EnemySize)
			{
				gameState = WIN;
			}
		}
	}
}

void CTankGameStage::KeyInput(char _input)
{
	if (gameState == GAME)
	{
		switch (_input)
		{
		case 'W':
		case 'w':
			pt->pos.Move(0, -1);
			pt->SetDir(UP);
			break;
		case 'S':
		case 's':
			pt->pos.Move(0, 1);
			pt->SetDir(DOWN);
			break;
		case 'A':
		case 'a':
			pt->pos.Move(-1, 0);
			pt->SetDir(LEFT);
			break;
		case 'D':
		case 'd':
			pt->pos.Move(1, 0);
			pt->SetDir(RIGHT);
			break;
		case VK_SPACE:
			pt->Shot();
			break;
		}
	}
}