#pragma once

#include "CFootBallGameObject.h"
#include <time.h>

class CGoalDae : public CFootBallGameObject
{
private:
	int nLength;
	char string[100];
	int nDist;
	clock_t StartTime;
	clock_t MoveTime;
public:
	CGoalDae();
	CGoalDae(int _x, int _y, int _nLength);
	~CGoalDae();
	void Dist_rev(int num); //nDist º≥¡§
	void MoveX(); // move «ÿ¡‹
};