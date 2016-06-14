#include "GameManager.h"
#include <conio.h>

CGameManager::CGameManager()
{
}

CGameManager::~CGameManager()
{
}

void CGameManager::Init()
{
	gameState = SELECT;
	ScreenTime = new CTime(3000);
	cur = new CCursor();
	CScreen::Init();
}

void CGameManager::Run()
{
	Init();

	while(gameState != EXIT)
	{
		Update();
		Render();
	}
}

void CGameManager::Update()
{
	CTime::SetCurTime();
	KeyInput();
	switch (gameState)
	{
	case SELECT:
		if (cur->pos->GetY()<GamePosS)
		{
			cur->pos->SetPos(cur->pos->GetX(), GamePosS);
		}
		else if(cur->pos->GetY()>GamePosE)
		{
			cur->pos->SetPos(cur->pos->GetX(), GamePosE);
		}
		break;
	case INIT:
		if (ScreenTime->DelayCheck())
		{
			gameState = STAGE;
			CScreen::ScreenClear();
		}
		break;
	case STAGE:
		if (ScreenTime->DelayCheck())
		{
			gameState = RUN;
			CScreen::ScreenClear();
		}
		break;
	case RUN:
		stage->Update();
		if (stage->GetState() == WIN)
		{
			ScreenTime->SetOldTime();
			gameState = SUCCESS;
		}
		else if (stage->GetState() == LOSE)
		{
			ScreenTime->SetOldTime();
			gameState = FAILED;
		}
		break;
	case FAILED:
	case SUCCESS:
		if (ScreenTime->DelayCheck())
		{
			gameState = EXIT;
		}
		break;
	}
}

void CGameManager::Render()
{
	CScreen::ScreenClear();
	switch (gameState)
	{
	case SELECT:
		cur->Render();
		CGameScreen::SelectGame();
		break;
	case INIT:
		screen->StartScreen();
		break;
	case STAGE:
		screen->StageScreen(gameStage);
		break;
	case RUN:
		stage->Render();
		break;
	case FAILED:
		screen->EndScreen();
		break;
	case SUCCESS:
		screen->SuccessScreen();
		break;
	case EXIT:
		break;
	}
	CScreen::ScreenFliping();
}

void CGameManager::KeyInput()
{
	if (_kbhit())
	{
		char ch = _getch();

		if (stage != NULL)
		{
			stage->KeyInput(ch);
		}
		switch (ch)
		{
			if (gameState == SELECT)
			{
		case 'w' :
			cur->pos->Move(0, -1);
			break;
		case 's':
			cur->pos->Move(0, 1);
			break;
			}
		case VK_SPACE:
			if (gameState == SELECT)
			{
				if (cur->pos->GetY() == GamePosS)
				{
					stage = new CTankGameStage();
					screen = new CTankGameScreen();
				}
				else if (cur->pos->GetY() == GamePosS + 1)
				{
					stage = new CFootBallGameStage();
					screen = new CFootBallScreen();
				}
				stage->Init();
				stage->SetState(GAME);
				gameState = INIT;
			}
			else if (gameState == INIT)
			{
				ScreenTime->SetOldTime();
				gameState = STAGE;
			}
			break;
		case VK_ESCAPE:
			exit(1);
			break;
		}
	}
}