#include "TankGameScreen.h"
#include <stdio.h>
#pragma warning (disable : 4996)

void CTankGameScreen::StartScreen()
{
	CScreen::ScreenPrint(0, 0, "□□□□□□□□□□□□□□□□□□□□□□□□□");
	CScreen::ScreenPrint(0, 1, "□                                              □");
	CScreen::ScreenPrint(0, 2, "□                                              □");
	CScreen::ScreenPrint(0, 3, "□                                              □");
	CScreen::ScreenPrint(0, 4, "□                                              □");
	CScreen::ScreenPrint(0, 5, "□                                              □");
	CScreen::ScreenPrint(0, 6, "□                                              □");
	CScreen::ScreenPrint(0, 7, "□                                              □");
	CScreen::ScreenPrint(0, 8, "□                                              □");
	CScreen::ScreenPrint(0, 9, "□                Press Space Bar               □");
	CScreen::ScreenPrint(0, 10, "□                                              □");
	CScreen::ScreenPrint(0, 11, "□                                              □");
	CScreen::ScreenPrint(0, 12, "□                                              □");
	CScreen::ScreenPrint(0, 13, "□                                              □");
	CScreen::ScreenPrint(0, 14, "□                                              □");
	CScreen::ScreenPrint(0, 15, "□                                              □");
	CScreen::ScreenPrint(0, 16, "□                                              □");
	CScreen::ScreenPrint(0, 17, "□                                              □");
	CScreen::ScreenPrint(0, 18, "□□□□□□□□□□□□□□□□□□□□□□□□□");
}

void CTankGameScreen::EndScreen()
{
	CScreen::ScreenPrint(0, 0, "□□□□□□□□□□□□□□□□□□□□□□□□□");
	CScreen::ScreenPrint(0, 1, "□                                              □");
	CScreen::ScreenPrint(0, 2, "□                                              □");
	CScreen::ScreenPrint(0, 3, "□                                              □");
	CScreen::ScreenPrint(0, 4, "□                                              □");
	CScreen::ScreenPrint(0, 5, "□                                              □");
	CScreen::ScreenPrint(0, 6, "□                                              □");
	CScreen::ScreenPrint(0, 7, "□                                              □");
	CScreen::ScreenPrint(0, 8, "□                                              □");
	CScreen::ScreenPrint(0, 9, "□                    Game Over                 □");
	CScreen::ScreenPrint(0, 10, "□                                              □");
	CScreen::ScreenPrint(0, 11, "□                                              □");
	CScreen::ScreenPrint(0, 12, "□                                              □");
	CScreen::ScreenPrint(0, 13, "□                                              □");
	CScreen::ScreenPrint(0, 14, "□                                              □");
	CScreen::ScreenPrint(0, 15, "□                                              □");
	CScreen::ScreenPrint(0, 16, "□                                              □");
	CScreen::ScreenPrint(0, 17, "□                                              □");
	CScreen::ScreenPrint(0, 18, "□□□□□□□□□□□□□□□□□□□□□□□□□");
}

void CTankGameScreen::SuccessScreen()
{
	CScreen::ScreenPrint(0, 0, "□□□□□□□□□□□□□□□□□□□□□□□□□");
	CScreen::ScreenPrint(0, 1, "□                                              □");
	CScreen::ScreenPrint(0, 2, "□                                              □");
	CScreen::ScreenPrint(0, 3, "□                                              □");
	CScreen::ScreenPrint(0, 4, "□                                              □");
	CScreen::ScreenPrint(0, 5, "□                                              □");
	CScreen::ScreenPrint(0, 6, "□                                              □");
	CScreen::ScreenPrint(0, 7, "□                                              □");
	CScreen::ScreenPrint(0, 8, "□                                              □");
	CScreen::ScreenPrint(0, 9, "□                    성  공!                   □");
	CScreen::ScreenPrint(0, 10, "□                                              □");
	CScreen::ScreenPrint(0, 11, "□                                              □");
	CScreen::ScreenPrint(0, 12, "□                                              □");
	CScreen::ScreenPrint(0, 13, "□                                              □");
	CScreen::ScreenPrint(0, 14, "□                                              □");
	CScreen::ScreenPrint(0, 15, "□                                              □");
	CScreen::ScreenPrint(0, 16, "□                                              □");
	CScreen::ScreenPrint(0, 17, "□                                              □");
	CScreen::ScreenPrint(0, 18, "□□□□□□□□□□□□□□□□□□□□□□□□□");
}

void CTankGameScreen::StageScreen(int _stage)
{
	char string[100];
	sprintf(string, "□                  %d스테이지                   □", _stage + 1);
	CScreen::ScreenPrint(0, 0, "□□□□□□□□□□□□□□□□□□□□□□□□□");
	CScreen::ScreenPrint(0, 1, "□                                              □");
	CScreen::ScreenPrint(0, 2, "□                                              □");
	CScreen::ScreenPrint(0, 3, "□                                              □");
	CScreen::ScreenPrint(0, 4, "□                                              □");
	CScreen::ScreenPrint(0, 5, "□                                              □");
	CScreen::ScreenPrint(0, 6, "□                                              □");
	CScreen::ScreenPrint(0, 7, "□                                              □");
	CScreen::ScreenPrint(0, 8, "□                                              □");
	CScreen::ScreenPrint(0, 9, string);
	CScreen::ScreenPrint(0, 10, "□                                              □");
	CScreen::ScreenPrint(0, 11, "□                                              □");
	CScreen::ScreenPrint(0, 12, "□                                              □");
	CScreen::ScreenPrint(0, 13, "□                                              □");
	CScreen::ScreenPrint(0, 14, "□                                              □");
	CScreen::ScreenPrint(0, 15, "□                                              □");
	CScreen::ScreenPrint(0, 16, "□                                              □");
	CScreen::ScreenPrint(0, 17, "□                                              □");
	CScreen::ScreenPrint(0, 18, "□□□□□□□□□□□□□□□□□□□□□□□□□");
}

void CTankGameScreen::StateScreen(int _stage, int _playerHp, int _bossHp)
{
	char string[100];
	sprintf(string, "= %d stage =", _stage + 1);
	CScreen::ScreenPrint(26 * 2, 0, string);
	sprintf(string, "플레이어 체력 : %d", _playerHp);
	CScreen::ScreenPrint(26 * 2, 1, string);
	sprintf(string, "독수리 체력 : %d", _bossHp);
	CScreen::ScreenPrint(26 * 2, 2, string);
}