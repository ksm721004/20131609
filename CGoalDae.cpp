#include "CGoalDae.h"

 
CGoalDae::CGoalDae()
{
	
}

CGoalDae::CGoalDae(int _x, int _y, int _nLength)
{
	x = _x;
	y = _y;
	nLength = _nLength;
	// string에 nLength에 해당하는 골대 문자열 입력, name에 대입
	for (int i = 0; i < nLength; i++)
	{
		if (!(i % 2))
		{
			if (i == 0)
			{
				strncat(string, "□", 2);
			}
			else if (i < nLength - 2)
			{
				strncat(string, "━", 2);
			}
			else
			{
				strncat(string, "□", 2);
			}
		}
	}
	name = string;
	center = NameLen() / 2 - 1;
	centerX = x + center;
	nDist = 1;
	MoveTime = 300;
}

CGoalDae::~CGoalDae()
{
}

void CGoalDae::Dist_rev(int num)
{
	nDist = num;
}

void CGoalDae::MoveX()
{
	if (clock() - StartTime > MoveTime)
	{
		Move(1 * nDist, 0);
		StartTime = clock();
	}
}