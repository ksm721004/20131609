#include "FootBallScreen.h"
#include <stdio.h>
#pragma warning (disable : 4996)

void CFootBallScreen::StartScreen()
{
	CScreen::ScreenPrint(10, 0, "����������������������������������������������");
	CScreen::ScreenPrint(10, 1, "��                                          ��");
	CScreen::ScreenPrint(10, 2, "��             �ব������                   ��");
	CScreen::ScreenPrint(10, 3, "��                                          ��");
	CScreen::ScreenPrint(10, 4, "��                        ///.   ��~~~      ��");
	CScreen::ScreenPrint(10, 5, "��                       (^.^)              ��");
	CScreen::ScreenPrint(10, 6, "��                      ���� ����           ��");
	CScreen::ScreenPrint(10, 7, "��                         ����             ��");
	CScreen::ScreenPrint(10, 8, "��                     ��  ����             ��");
	CScreen::ScreenPrint(10, 9, "��                                          ��");
	CScreen::ScreenPrint(10, 10, "��                                          ��");
	CScreen::ScreenPrint(10, 11, "��       �� ���� ����  Go! Go!              ��");
	CScreen::ScreenPrint(10, 12, "��                                          ��");
	CScreen::ScreenPrint(10, 13, "��                                          ��");
	CScreen::ScreenPrint(10, 14, "��       j :���� l : ������ k :��           ��");
	CScreen::ScreenPrint(10, 15, "��                                          ��");
	CScreen::ScreenPrint(10, 16, "��                                          ��");
	CScreen::ScreenPrint(10, 17, "��                                          ��");
	CScreen::ScreenPrint(10, 18, "��        ���ܦ�  space Ű�� �����ּ���     ��");
	CScreen::ScreenPrint(10, 19, "��                                          ��");
	CScreen::ScreenPrint(10, 20, "��                                          ��");
	CScreen::ScreenPrint(10, 21, "��                                          ��");
	CScreen::ScreenPrint(10, 22, "��                                          ��");
	CScreen::ScreenPrint(10, 23, "����������������������������������������������");
}

void CFootBallScreen::StageScreen(int g_nStage)
{
	char string[100];

	CScreen::ScreenPrint(10, 0, "����������������������������������������������");
	CScreen::ScreenPrint(10, 1, "�����������������������᦭");
	CScreen::ScreenPrint(10, 2, "�����������������������᦭");
	CScreen::ScreenPrint(10, 3, "�����������������������᦭");
	CScreen::ScreenPrint(10, 4, "�����������������������᦭");
	CScreen::ScreenPrint(10, 5, "�����������������������᦭");
	CScreen::ScreenPrint(10, 6, "�����������������������᦭");
	CScreen::ScreenPrint(10, 7, "�����������������������᦭");
	CScreen::ScreenPrint(10, 8, "�����������������������᦭");
	CScreen::ScreenPrint(10, 9, "�����������������������᦭");
	CScreen::ScreenPrint(10, 10, "��������                    ������᦭");
	sprintf(string, "��������     %d   ��������   ������᦭", g_nStage + 1);
	CScreen::ScreenPrint(10, 11, string);
	CScreen::ScreenPrint(10, 12, "��������                    ������᦭");
	CScreen::ScreenPrint(10, 13, "�����������������������᦭");
	CScreen::ScreenPrint(10, 14, "�����������������������᦭");
	CScreen::ScreenPrint(10, 15, "�����������������������᦭");
	CScreen::ScreenPrint(10, 16, "�����������������������᦭");
	CScreen::ScreenPrint(10, 17, "�����������������������᦭");
	CScreen::ScreenPrint(10, 18, "�����������������������᦭");
	CScreen::ScreenPrint(10, 19, "�����������������������᦭");
	CScreen::ScreenPrint(10, 20, "�����������������������᦭");
	CScreen::ScreenPrint(10, 21, "�����������������������᦭");
	CScreen::ScreenPrint(10, 22, "�����������������������᦭");
	CScreen::ScreenPrint(10, 23, "����������������������������������������������");
}

void CFootBallScreen::BackScreen()
{
	CScreen::ScreenPrint(10, 0, "����������������������������������������������");
	CScreen::ScreenPrint(10, 1, "��");
	CScreen::ScreenPrint(10, 2, "��");
	CScreen::ScreenPrint(10, 3, "��");
	CScreen::ScreenPrint(10, 4, "��");
	CScreen::ScreenPrint(10, 5, "��");
	CScreen::ScreenPrint(10, 6, "��");
	CScreen::ScreenPrint(10, 7, "��");
	CScreen::ScreenPrint(10, 8, "��");
	CScreen::ScreenPrint(10, 9, "��");
	CScreen::ScreenPrint(10, 10, "��");
	CScreen::ScreenPrint(10, 11, "��");
	CScreen::ScreenPrint(10, 12, "��");
	CScreen::ScreenPrint(10, 13, "��");
	CScreen::ScreenPrint(10, 14, "��");
	CScreen::ScreenPrint(10, 15, "��");
	CScreen::ScreenPrint(10, 16, "��");
	CScreen::ScreenPrint(10, 17, "��");
	CScreen::ScreenPrint(10, 18, "��");
	CScreen::ScreenPrint(10, 19, "��");
	CScreen::ScreenPrint(10, 20, "��");
	CScreen::ScreenPrint(10, 21, "��");
	CScreen::ScreenPrint(10, 22, "��");
	CScreen::ScreenPrint(54, 1, "��");
	CScreen::ScreenPrint(54, 2, "��");
	CScreen::ScreenPrint(54, 3, "��");
	CScreen::ScreenPrint(54, 4, "��");
	CScreen::ScreenPrint(54, 5, "��");
	CScreen::ScreenPrint(54, 6, "��");
	CScreen::ScreenPrint(54, 7, "��");
	CScreen::ScreenPrint(54, 8, "��");
	CScreen::ScreenPrint(54, 9, "��");
	CScreen::ScreenPrint(54, 10, "��");
	CScreen::ScreenPrint(54, 11, "��");
	CScreen::ScreenPrint(54, 12, "��");
	CScreen::ScreenPrint(54, 13, "��");
	CScreen::ScreenPrint(54, 14, "��");
	CScreen::ScreenPrint(54, 15, "��");
	CScreen::ScreenPrint(54, 16, "��");
	CScreen::ScreenPrint(54, 17, "��");
	CScreen::ScreenPrint(54, 18, "��");
	CScreen::ScreenPrint(54, 19, "��");
	CScreen::ScreenPrint(54, 20, "��");
	CScreen::ScreenPrint(54, 21, "��");
	CScreen::ScreenPrint(54, 22, "��");
	CScreen::ScreenPrint(10, 23, "����������������������������������������������");
}

void CFootBallScreen::GoalMessage(int nX, int nY)
{
	CScreen::ScreenPrint(nX, nY, "�� )) ���� (( ��");
	CScreen::ScreenPrint(nX, nY + 1, "��(^^')/ ��(\"*')/");
	CScreen::ScreenPrint(nX, nY + 2, "   ��       ��");
	CScreen::ScreenPrint(nX, nY + 3, "  ����    ����");
}

void CFootBallScreen::SuccessScreen()
{
	CScreen::ScreenPrint(10, 0, "����������������������������������������������");
	CScreen::ScreenPrint(10, 1, "��                                          ��");
	CScreen::ScreenPrint(10, 2, "��                                          ��");
	CScreen::ScreenPrint(10, 3, "��                                          ��");
	CScreen::ScreenPrint(10, 4, "��                                          ��");
	CScreen::ScreenPrint(10, 5, "��                                          ��");
	CScreen::ScreenPrint(10, 6, "��                ////����                  ��");
	CScreen::ScreenPrint(10, 7, "��               q ��  �� p                 ��");
	CScreen::ScreenPrint(10, 8, "��               (��������)                 ��");
	CScreen::ScreenPrint(10, 9, "��             �� �̼� ���� ��              ��");
	CScreen::ScreenPrint(10, 10, "��                                          ��");
	CScreen::ScreenPrint(10, 11, "��                                          ��");
	CScreen::ScreenPrint(10, 12, "��                                          ��");
	CScreen::ScreenPrint(10, 13, "��                                          ��");
	CScreen::ScreenPrint(10, 14, "��                                          ��");
	CScreen::ScreenPrint(10, 15, "��                                          ��");
	CScreen::ScreenPrint(10, 16, "��                                          ��");
	CScreen::ScreenPrint(10, 17, "��                                          ��");
	CScreen::ScreenPrint(10, 18, "��                                          ��");
	CScreen::ScreenPrint(10, 19, "��                                          ��");
	CScreen::ScreenPrint(10, 20, "��                                          ��");
	CScreen::ScreenPrint(10, 21, "��                                          ��");
	CScreen::ScreenPrint(10, 22, "��                                          ��");
	CScreen::ScreenPrint(10, 23, "����������������������������������������������");
}

void CFootBallScreen::EndScreen()
{
	CScreen::ScreenPrint(10, 0, "����������������������������������������������");
	CScreen::ScreenPrint(10, 1, "��                                          ��");
	CScreen::ScreenPrint(10, 2, "��                                          ��");
	CScreen::ScreenPrint(10, 3, "��                                          ��");
	CScreen::ScreenPrint(10, 4, "��                                          ��");
	CScreen::ScreenPrint(10, 5, "��                                          ��");
	CScreen::ScreenPrint(10, 6, "��                                          ��");
	CScreen::ScreenPrint(10, 7, "��                                          ��");
	CScreen::ScreenPrint(10, 8, "��                                          ��");
	CScreen::ScreenPrint(10, 9, "��                                          ��");
	CScreen::ScreenPrint(10, 10, "��                                          ��");
	CScreen::ScreenPrint(10, 11, "��                    �̼� ���� !!!!        ��");
	CScreen::ScreenPrint(10, 12, "��                                          ��");
	CScreen::ScreenPrint(10, 13, "��                                          ��");
	CScreen::ScreenPrint(10, 14, "��                 �ܦ�����                 ��");
	CScreen::ScreenPrint(10, 15, "��                   ��  ��                 ��");
	CScreen::ScreenPrint(10, 16, "��                  �����                ��");
	CScreen::ScreenPrint(10, 17, "��                                          ��");
	CScreen::ScreenPrint(10, 18, "��        �ٽ� �Ͻðڽ��ϱ�? (y/n)          ��");
	CScreen::ScreenPrint(10, 19, "��                                          ��");
	CScreen::ScreenPrint(10, 20, "��                                          ��");
	CScreen::ScreenPrint(10, 21, "��                                          ��");
	CScreen::ScreenPrint(10, 22, "��                                          ��");
	CScreen::ScreenPrint(10, 23, "����������������������������������������������");
}

void CFootBallScreen::ResultScreen(int g_nStage)
{
	char string[100];
	CScreen::ScreenPrint(10, 0, "����������������������������������������������");
	CScreen::ScreenPrint(10, 1, "��                                          ��");
	CScreen::ScreenPrint(10, 2, "��                                          ��");
	CScreen::ScreenPrint(10, 3, "��             �ব������                   ��");
	CScreen::ScreenPrint(10, 4, "��                                          ��");
	CScreen::ScreenPrint(10, 5, "��                                          ��");
	CScreen::ScreenPrint(10, 6, "��                                          ��");
	CScreen::ScreenPrint(10, 7, "��                                          ��");
	sprintf(string, "��      ������ �������� :  %2d               ��", g_nStage + 1);
	CScreen::ScreenPrint(10, 8, string);
	CScreen::ScreenPrint(10, 9, "��                                          ��");
	CScreen::ScreenPrint(10, 10, "��                                          ��");
	CScreen::ScreenPrint(10, 11, "��   ___�ƢƢ�___                           ��");
	CScreen::ScreenPrint(10, 12, "��     (*^  ^*)                             ��");
	CScreen::ScreenPrint(10, 13, "�� =====��==��=====                         ��");
	CScreen::ScreenPrint(10, 14, "��                                          ��");
	CScreen::ScreenPrint(10, 15, "��                                          ��");
	CScreen::ScreenPrint(10, 16, "��                                          ��");
	CScreen::ScreenPrint(10, 17, "��                                          ��");
	CScreen::ScreenPrint(10, 18, "��                      ���ܦ�              ��");
	CScreen::ScreenPrint(10, 19, "��                                          ��");
	CScreen::ScreenPrint(10, 20, "��                                          ��");
	CScreen::ScreenPrint(10, 21, "��                                          ��");
	CScreen::ScreenPrint(10, 22, "��                                          ��");
	CScreen::ScreenPrint(10, 23, "����������������������������������������������");
}

void CFootBallScreen::ScoreScreen(int _nStage, clock_t _LimitTime, clock_t _StartTime, int _nGoalBall, int _ballCount)
{
		char string[100];
		sprintf(string, "%d STAGE", _nStage + 1);
		CScreen::ScreenPrint(56, 4, string);
		sprintf(string, "%d / %d SEC", (clock() - _StartTime) / 1000, _LimitTime / 1000);
		CScreen::ScreenPrint(56, 6, string);
		sprintf(string, "%d / %d GOAL", _ballCount, _nGoalBall);
		CScreen::ScreenPrint(56, 8, string);
}