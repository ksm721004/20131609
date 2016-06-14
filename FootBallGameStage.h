#pragma once
#include <conio.h>

#include "Screen.h"
#include "CPlayer.h"
#include "CGoalDae.h"
#include "CBall.h"
#include "CStageInfo.h"
#include "FootBallScreen.h"
#include "Stage.h"

#define FootBallStageNum 3

enum FootBallState {SUC, FAIL, NON, READY};

class CFootBallGameStage : public CStage
{
private:
	CPlayer *pl;
	CBall *ball;
	int g_nStage;
	FootBallState footballstate;
	CFootBallScreen *fbs;
	clock_t GameOldTime;
	CStageInfo *sinfo[FootBallStageNum];
public:	
	CFootBallGameStage();
	~CFootBallGameStage();

	void Init();
	void Update();
	void KeyInput(char _Input);
	void Render();
};