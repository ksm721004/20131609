#pragma once
#include "TankGameObject.h"

enum _TerrainState{SPACE, WALL, BLACKWALL};

//���� Ŭ����

class CTerrain : public CTankGameObject
{
private:
	int m_State;
public:
	CTerrain();
	~CTerrain();

	void SetState(int _State);
	int GetState();

	virtual void Render();
};