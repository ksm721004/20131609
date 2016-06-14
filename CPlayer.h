#pragma once
#include "CFootBallGameObject.h"

class CPlayer : public CFootBallGameObject
{
private:
public:
	CPlayer();
	CPlayer(int _x, int _y);
	~CPlayer();

	void Render();
};