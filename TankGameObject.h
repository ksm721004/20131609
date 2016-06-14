#pragma once
#include "Position.h"
#include "TimeCheck.h"

#include "Object.h"

enum _DIRECT { UP, DOWN, LEFT, RIGHT };
//������ ������Ʈ ���̽�
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
	void Hurt();	//������ 1 ����

	int GetLife();
	int GetDir();
};