#pragma once

#include "TankGameObject.h"
#include "Terrain.h"
#include "Bullet.h"
#include "Tank.h"
#include "Boss.h"

//충돌체크 클래스

class CStrikeCheck
{
private:
public:
	CStrikeCheck();
	~CStrikeCheck();

	static bool ObjectCheck(CTankGameObject *lobj, CTankGameObject *robj);
	static void StrikeTankBullet(CTank *lTank, CBullet *bul);
	static void StrikeTerrainBullet(CTerrain *ter, CBullet *bul);
	static void StrikeBossBullet(CBoss *boss, CBullet *bul);
	static void StrikeTankTerrain(CTank *tank, CTerrain *ter);
	static void StrikeTankTank(CTank *lTank, CTank *rTank);
};