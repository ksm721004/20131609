#pragma once
#include "TankGameStage.h"
#include "Cursor.h"
#include "GameScreen.h"
#include "TimeCheck.h"
#include "FootBallGameStage.h"
#include "CStageScreen.h"
#include "FootBallScreen.h"
#include "TankGameScreen.h"

enum _GAME_STATE { SELECT, INIT, STAGE, RUN, FAILED, SUCCESS, EXIT };
enum _GAME_ {TANK, FOOTBALL};
enum _Arrow {KEY_UP = 38, KEY_DOWN = 40, KEY_LEFT = 37, KEY_RIGHT = 39};

#define GameNum 2
class CGameManager
{
private:
	int gameStage;
	int gameState;
	int game;
	CTime *ScreenTime;
	CCursor *cur;
	PrintGameScreen *screen;
	CStage *stage;
public:
	CGameManager();
	~CGameManager();

	void Init();
	void Run();
	void Update();
	void Render();
	void KeyInput();
};