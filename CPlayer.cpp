
#include "CPlayer.h"

CPlayer::CPlayer()
{
	name = "曲收≒收旭";
}

CPlayer::CPlayer(int _x, int _y)
{
	x = _x;
	y = _y;
	name = "曲收≒收旭";
	center = NameLen() / 2 - 1;
	centerX = x + center;
}

CPlayer::~CPlayer()
{
}

void CPlayer::Render()
{
	if (x < 12)
	{
		CScreen::ScreenPrint(12, y, &name[(centerX - 16)*-1]);
	}
	else if (x + (NameLen() - center + 1) > 49)
	{
		char string[100] = {};
		strncat(string, name, NameLen() - ((x + center + 1) - 49));
		CScreen::ScreenPrint(x, y, string);
	}
	else
	{
		CScreen::ScreenPrint(x, y, name);
	}
}