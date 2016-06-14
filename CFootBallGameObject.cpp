#include "CFootBallGameObject.h"

CFootBallGameObject::CFootBallGameObject()
{
}

CFootBallGameObject::CFootBallGameObject(int _x, int _y, char *_name)
{
	x = _x;
	y = _y;
	name = _name;
	center = NameLen() / 2 - 1;
	centerX = x + center;
}

CFootBallGameObject::~CFootBallGameObject()
{
}

void CFootBallGameObject::Move(int _x, int _y)
{
	x += _x;
	y += _y;
	centerX = x + center;
}

void CFootBallGameObject::PointMove(int _x, int _y)
{ 
	//x, y ��ǥ�� �Է¹��� _x, _y��ǥ�� ���� ���� ������
	if (x != _x || y != _y)
	{
		x = _x;
		y = _y;
		centerX = x + center;
	}
}

void CFootBallGameObject::Render()
{
	CScreen::ScreenPrint(x, y, name);
}

int CFootBallGameObject::NameLen()
{
	int i;
	for (i = 0; name[i] != NULL; i++)
	{
	}

	return i;
}

int CFootBallGameObject::ReturnX()
{
	return x;
}

int CFootBallGameObject::ReturnY()
{
	return y;
}

int CFootBallGameObject::ReturnCenterX()
{
	return centerX;
}

int CFootBallGameObject::ReturnCenter()
{
	return center;
}