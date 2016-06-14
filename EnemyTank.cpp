#include "EnemyTank.h"

CEnemyTank::CEnemyTank()
{
	MoveDelay = new CTime(300);
	RotateDelay = new CTime(4500);
	ShotDelay = new CTime(1200);
}

CEnemyTank::~CEnemyTank()
{
}

void CEnemyTank::Render()
{
	if (m_nLife)
	{
		switch (m_nDir)
		{
		case UP:
			CScreen::ScreenPrint(pos.GetX() * 2, pos.GetY(), "¡ã");
			break;
		case DOWN:
			CScreen::ScreenPrint(pos.GetX() * 2, pos.GetY(), "¡å");
			break;
		case LEFT:
			CScreen::ScreenPrint(pos.GetX() * 2, pos.GetY(), "¢¸");
			break;
		case RIGHT:
			CScreen::ScreenPrint(pos.GetX() * 2, pos.GetY(), "¢º");
			break;
		}
	}
	for (int i = 0; i < BulletSize; i++)
	{
		m_pBullet[i]->Render();
	}
}

void CEnemyTank::Move()
{
	if (m_nLife && MoveDelay->DelayCheck() && iState == ENEMY_RUN)
		switch (m_nDir)
		{
		case UP:
			pos.Move(0, -1);
			break;
		case DOWN:
			pos.Move(0, 1);
			break;
		case LEFT:
			pos.Move(-1, 0);
			break;
		case RIGHT:
			pos.Move(1, 0);
			break;
		}
}

void CEnemyTank::SetState(int _iState)
{
	iState = _iState;
}

int CEnemyTank::GetState()
{
	return iState;
}