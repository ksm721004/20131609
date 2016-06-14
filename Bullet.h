#pragma once
#pragma once

#include "TankGameObject.h"

//탱크가 발사하는 총알

class CBullet : public CTankGameObject
{
private:
public:
	CBullet();
	~CBullet();

	virtual void Render();
	void Shot();
};