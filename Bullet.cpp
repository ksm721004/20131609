#include "Bullet.h"

CBullet::CBullet()
{
	MoveDelay = new CTime(100);
}

CBullet::~CBullet()
{
}

void CBullet::Render()
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
}

void CBullet::Shot() //�Ѿ��� ���������, ��� �������ִ� �Լ�
{
	if (m_nLife > 0 && MoveDelay->DelayCheck())
	{
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
}