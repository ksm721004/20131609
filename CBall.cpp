
#include "CBall.h"

CBall::CBall() 
{
	shotReady = false;
	MoveTime = 100;
}

CBall::CBall(int _x, int _y)
{
	x = _x;
	y = _y;
	name = "¡Ý";
	shotReady = false;
	MoveTime = 100;
	center = NameLen() / 2 - 1;
	centerX = x + center;
}

CBall::~CBall()
{
}

void CBall::Shot()
{
	clock_t cl = clock();
	if (shotReady == true)
	{
		if ((cl - StartTime) >= MoveTime)
		{
			Move(0, -1);
			StartTime = clock();
		}
	}

	if (y <= 1)
	{
		shotReady = false;
	}
}

void CBall::StartTimeSetting()
{
	if (shotReady == false)
	{
		StartTime = clock();
	}
}