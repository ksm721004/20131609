#include "FootBallGameStage.h"

CFootBallGameStage::CFootBallGameStage()
{
	fbs = new CFootBallScreen();
	//객체 초기화
}

CFootBallGameStage::~CFootBallGameStage()
{
}

void CFootBallGameStage::Init()
{
	//1스테이지 부터 시작, State =INIT 상태.
	sinfo[0] = new CStageInfo(3, 20 * 1000, 10, 20, 3);
	sinfo[1] = new CStageInfo(5, 30 * 1000, 14, 20, 3);
	sinfo[2] = new CStageInfo(99, 1 * 1000, 25, 13, 3);
	sinfo[0]->Init();
	pl = new CPlayer(20, 22);
	ball = new CBall(20, 21);

	g_nStage = 0;
	GameOldTime = clock();
	CScreen::Init();
	footballstate = NON;
}

void CFootBallGameStage::Update()
{
	switch (footballstate)
	{
	case NON:
		if (sinfo[g_nStage]->LimitTime < clock() - sinfo[g_nStage]->StartTime)
		{
			footballstate = FAIL;
		}
		if (sinfo[g_nStage]->nGoalBall <= sinfo[g_nStage]->nGoalBallCount)
		{
			footballstate = SUC;
		}
		if (ball->shotReady == false)
		{
			//ball shotReady =false 면 플레이어 중간좌표 따라다님
			ball->PointMove(pl->ReturnCenterX(), pl->ReturnY() - 1);
		}
		else
		{
			//ball shotReady true일 때, 쏨.
			ball->Shot();
		}
		if (sinfo[g_nStage]->gd->ReturnX() < 13)
		{
			// 골대 왼쪽 부딪히면 방향 오른쪽으로 전환
			sinfo[g_nStage]->gd->Dist_rev(1);
		}
		else if (sinfo[g_nStage]->gd->ReturnX() + sinfo[g_nStage]->gd->NameLen() > 52)
		{
			// 오른쪽 부딪히면 왼쪽으로 전환
			sinfo[g_nStage]->gd->Dist_rev(-1);
		}
		sinfo[g_nStage]->gd->MoveX();

		if (ball->ReturnY() == sinfo[g_nStage]->gd->ReturnY() &&
			ball->ReturnX() > sinfo[g_nStage]->gd->ReturnX() &&
			ball->ReturnX() < sinfo[g_nStage]->gd->ReturnX() + sinfo[g_nStage]->gd->NameLen())
		{
			// 골대와 볼이 접촉시
			if (ball->ReturnX() <= sinfo[g_nStage]->gd->ReturnX() + 1 ||
				ball->ReturnX() >= sinfo[g_nStage]->gd->ReturnX() + sinfo[g_nStage]->gd->NameLen() - 1)
			{
				//골대 끝에 맞으면 아무일 없고
			}
			else
			{
				//골대 안쪽 맞으면 골 카운트 +1
				sinfo[g_nStage]->nGoalBallCount++;
			}
			//볼은 다시 플레이어에게 돌아감
			ball->shotReady = false;
		}
		break;
	case FAIL:
		break;
	case SUC:
		if (g_nStage < FootBallStageNum - 2)
		{
			g_nStage++;
			sinfo[g_nStage]->Init();
			footballstate = READY;
			GameOldTime = clock();
		}
		else
		{
			gameState = WIN;
		}
	case READY:
		if (clock() - GameOldTime > 3000)
		{
			footballstate = NON;
			sinfo[g_nStage]->Init();
		}
		break;
	}
}

void CFootBallGameStage::KeyInput(char _Input)
{
	char nRemain;

	switch (_Input)
	{
	case 'j':
		if (pl->ReturnCenterX() > 12) // 왼쪽 충돌 경계 좌표 체크
		{
			pl->Move(-1, 0);
			nRemain = pl->NameLen() - pl->ReturnCenter() + 1; // 전체 길이 - ( 중심 좌표 + 1 )은 남은 길이
														  // Note: 2컬럼씩 이동하기 위한 부분 ( 팔이 걸친 경우 ) 
			if (pl->ReturnX() - pl->ReturnCenter() < 8 || pl->ReturnX() + nRemain > 51)
				pl->Move(-1, 0);
		}
		break;
	case 'k':
		ball->StartTimeSetting();
		ball->shotReady = true;
		break;
	case 'l':
		if (pl->ReturnCenterX() < 51) // 오른쪽 충돌 경계 좌표 체크
		{
			pl->Move(1, 0);
			nRemain = pl->NameLen() - pl->ReturnCenter() + 1; // 전체 길이 - ( 중심 좌표 + 1 )은 남은 길이
														  // Note: 2컬럼씩 이동하기 위한 부분 ( 팔이 걸친 경우 )
			if (pl->ReturnX() + nRemain > 51 || (pl->ReturnX() - pl->ReturnCenter() < 8))
				pl->Move(1, 0);
		}
		break;
	case 'y':
		if (footballstate == FAIL)
		{
			GameOldTime = clock();
			fbs->StartScreen();
			sinfo[g_nStage]->Init();
			ball->shotReady = false;
			footballstate = READY;
		}
		break;
	case 'n':
		if (footballstate == FAIL)
		{
			gameState = LOSE;
			GameOldTime = clock();
		}
		break;
	}
}

void CFootBallGameStage::Render()
{
	switch (footballstate)
	{
	case NON:
		fbs->BackScreen();
		fbs->ScoreScreen(g_nStage, sinfo[g_nStage]->LimitTime, sinfo[g_nStage]->StartTime, sinfo[g_nStage]->nGoalBall, sinfo[g_nStage]->nGoalBallCount);
		pl->Render();
		ball->Render();
		sinfo[g_nStage]->gd->Render();
		break;
	case SUC:
		fbs->SuccessScreen();
		break;
	case FAIL:
		fbs->EndScreen();
		break;
	case READY:
		fbs->StageScreen(g_nStage);
		break;
	}
}