#pragma once
#include "TankGameObject.h"
#include "Bullet.h"

#define BulletSize 5

//플레이어 탱크, 적 탱크의 베이스

class CTank : public  CTankGameObject
{
protected:
public:
	CTank();
	virtual ~CTank();

	CTime *ShotDelay;
	CBullet *m_pBullet[BulletSize];

	void Shot();
	void MoveBullet();
};