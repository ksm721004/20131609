#pragma once
#include "EnemyTank.h"
#include "Terrain.h"
#include "StrikeCheck.h"

//���� �����̴� AI

class CEnemyAI
{
private:
public:	
	CEnemyAI();
	~CEnemyAI();
	
	static void Init();
	static void TerrainEnemyRotation(CEnemyTank *et, CTerrain *ter);
	static void TankEnemyRotation(CEnemyTank *et, CTank *t);
	static void RandRotation(CEnemyTank *et);
	static void Shot(CEnemyTank *et);
};