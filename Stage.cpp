#include "Stage.h"

CStage::CStage()
{
	gameState = NONGAME;
	stageNum = 0;
}

CStage::~CStage()
{
}

int CStage::GetState()
{
	return gameState;
}

void CStage::SetState(int _gameState)
{
	gameState = _gameState;
}