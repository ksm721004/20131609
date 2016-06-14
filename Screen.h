#pragma once

#include <stdio.h>
#include <time.h>
#include <Windows.h>
#pragma warning (disable : 4996)

class CScreen
{
private:

	CScreen() {};
public:
	~CScreen();

	static void Init();
	static void ScreenPrint(int _x, int _y, char *string);
	static void ScreenFliping();
	static void ScreenClear();
	static void ScreenRelease();
};