#include "Boss.h"

CBoss::CBoss()
{
}

CBoss::~CBoss()
{
}

void CBoss::Render()
{
	if (m_nLife)
	{
		CScreen::ScreenPrint(pos.GetX() * 2, pos.GetY(), "¢¼");
	}
}