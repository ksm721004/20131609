#include "Position.h"

CPosition::CPosition()
{
}

CPosition::~CPosition()
{
}

void CPosition::SetPos(int _x, int _y)
{
	x = _x;
	y = _y;
}

int CPosition::GetX()
{
	return x;
}

int CPosition::GetY()
{
	return y;
}

void CPosition::Move(int _x, int _y)
{
	x += _x;
	y += _y;
}