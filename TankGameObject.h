#pragma once
#include "Position.h"
#include "TimeCheck.h"

#include "Object.h"

enum _DIRECT { UP, DOWN, LEFT, RIGHT };
//게임의 오브젝트 베이스
class CTankGameObject : public CObject
{
protected:
	int m_nDir;
	int m_nLife;
public:
	CTankGameObject();
	virtual ~CTankGameObject();

	CTime *MoveDelay;
	CPosition pos;
	virtual void Render() = 0;

	void SetLife(int _nLIfe);
	void SetDir(int _nDir);
	void Hurt();	//라이프 1 감소

	int GetLife();
	int GetDir();
};