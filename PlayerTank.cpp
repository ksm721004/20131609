#include "PlayerTank.h"

CPlayerTank::CPlayerTank()
{
	m_nLife = 5;
}

CPlayerTank::~CPlayerTank()
{
}

void CPlayerTank::Render()
{
	if (m_nLife)
		switch (m_nDir)
		{
		case UP:
			CScreen::ScreenPrint(pos.GetX() * 2, pos.GetY(), "��");
			break;
		case DOWN:
			CScreen::ScreenPrint(pos.GetX() * 2, pos.GetY(), "��");
			break;
		case LEFT:
			CScreen::ScreenPrint(pos.GetX() * 2, pos.GetY(), "��");
			break;
		case RIGHT:
			CScreen::ScreenPrint(pos.GetX() * 2, pos.GetY(), "��");
			break;
		}

	for (int i = 0; i < BulletSize; i++)
	{
		m_pBullet[i]->Render();
	}
}