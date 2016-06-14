#include "Terrain.h"

CTerrain::CTerrain()
{
}

CTerrain::~CTerrain()
{
}

void CTerrain::SetState(int _State)
{
	m_State = _State;
}

int CTerrain::GetState()
{
	return m_State;
}

void CTerrain::Render()
{
	if (GetLife())
	{
		if (GetState() == SPACE)
		{
		}
		else if (GetState() == WALL)
		{
			CScreen::ScreenPrint(pos.GetX() * 2, pos.GetY(), "бр");
		}
		else if (GetState() == BLACKWALL)
		{
			CScreen::ScreenPrint(pos.GetX() * 2, pos.GetY(), "в╚");
		}
	}
}