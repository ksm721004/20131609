#include "StrikeCheck.h"

CStrikeCheck::CStrikeCheck()
{
}

CStrikeCheck::~CStrikeCheck()
{
}

bool CStrikeCheck::ObjectCheck(CTankGameObject *lobj, CTankGameObject *robj)
{
	if (lobj->pos.GetX() == robj->pos.GetX() &&
		lobj->pos.GetY() == robj->pos.GetY())
	{
		return true;
	}

	return false;
}

void CStrikeCheck::StrikeTankBullet(CTank *lTank, CBullet *bul)
{
	if(lTank != nullptr && bul != nullptr)
	if (ObjectCheck(lTank, bul))
	{
		if (lTank->GetLife() && bul->GetLife())
		{
			lTank->Hurt();
			bul->Hurt();
		}
	}
}

void CStrikeCheck::StrikeTerrainBullet(CTerrain *ter, CBullet *bul)
{
	if(ter != nullptr && bul != nullptr)
	if (ObjectCheck(ter, bul))
	{
		if (ter->GetState() == WALL || ter->GetState() == BLACKWALL)
		{
			if (ter->GetLife() && bul->GetLife())
			{
				if (ter->GetState() == WALL)
				{
					ter->Hurt();
				}
				bul->Hurt();
			}
		}
	}
}

void CStrikeCheck::StrikeBossBullet(CBoss *boss, CBullet *bul)
{
	if(boss != nullptr && bul != nullptr)
	if (ObjectCheck(boss, bul))
	{
		if (boss->GetLife() && bul->GetLife())
		{
			boss->Hurt();
			bul->Hurt();
		}
	}
}

void CStrikeCheck::StrikeTankTerrain(CTank *tank, CTerrain *ter)
{
	if(tank != nullptr && ter != nullptr)
	if (ObjectCheck(tank, ter))
	{
		if (ter->GetLife() && tank->GetLife())
		{
			if(ter->GetState() == WALL || ter->GetState() == BLACKWALL)
			switch (tank->GetDir())
			{
			case UP:
				tank->pos.Move(0, 1);
				break;
			case DOWN:
				tank->pos.Move(0, -1);
				break;
			case LEFT:
				tank->pos.Move(1, 0);
				break;
			case RIGHT:
				tank->pos.Move(-1, 0);
				break;
			}
		}
	}
}

void CStrikeCheck::StrikeTankTank(CTank *lTank, CTank *rTank)
{
	if (ObjectCheck(lTank, rTank))
	{
		if (lTank->GetLife() && rTank->GetLife())
		{
			switch(lTank->GetDir())
			{
			case UP:
				lTank->pos.Move(0, 1);
				break;
			case DOWN:
				lTank->pos.Move(0, -1);
				break;
			case LEFT:
				lTank->pos.Move(1, 0);
				break;
			case RIGHT:
				lTank->pos.Move(-1, 0);
				break;
			}
		}
	}
}