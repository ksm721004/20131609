#include "EnemyAI.h"
#include <stdlib.h>

CEnemyAI::CEnemyAI()
{
}

CEnemyAI::~CEnemyAI()
{
}

void CEnemyAI::Init()
{
	srand((unsigned int)time(NULL));
}

void CEnemyAI::TerrainEnemyRotation(CEnemyTank *et, CTerrain *ter)
{
	if(et != nullptr && ter != nullptr)
	switch (et->GetState())
	{
	case ENEMY_RUN:
		if (ter->GetLife())
		{
			if (CStrikeCheck::ObjectCheck(et, ter))
			{
				if (ter->GetState() == WALL || ter->GetState() == BLACKWALL)
				{
					CStrikeCheck::StrikeTankTerrain(et, ter);
					et->SetState(ENEMY_ROTATION);
				}
			}
		}
		break;
	case ENEMY_ROTATION:
		int nDir = et->GetDir();
		et->SetDir(rand() % 4);
		if(et->GetDir() != nDir)
		et->SetState(ENEMY_RUN);
		break;
	}
}

void CEnemyAI::TankEnemyRotation(CEnemyTank *et, CTank *t)
{
	if(et != nullptr && t != nullptr)
	if (CStrikeCheck::ObjectCheck(et, t))
	{
		CStrikeCheck::StrikeTankTank(et, t);
		et->SetDir(rand() % 4);
	}
}

void CEnemyAI::RandRotation(CEnemyTank *et)
{
	/*if(et != nullptr)
	if (et->RotateDelay->DelayCheck())
	{
		et->SetDir(rand() % 4);
	}*/
}

void CEnemyAI::Shot(CEnemyTank *et)
{
	if(et != nullptr)
	et->Shot();
}