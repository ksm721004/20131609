#pragma once

#include "Stage.h"
#include "PlayerTank.h"
#include "EnemyTank.h"
#include "Terrain.h"
#include "Boss.h"
#include "StrikeCheck.h"
#include "EnemyAI.h"
#include "TankGameScreen.h"

#define MAPX 25
#define MAPY 18
#define EnemySize 10



//스테이지 클래스

class CTankGameStage : public CStage
{
private:
	CPlayerTank *pt;
	CEnemyTank *et[EnemySize];
	CTerrain *Map[MAPX][MAPY];
	CBoss *boss;
	CTankGameScreen *tgs;
public:
	CTankGameStage();
	~CTankGameStage();

	void Init();
	void Render();
	void Update();
	void KeyInput(char _input);
};