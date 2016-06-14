#pragma once

//좌표값을 정하고, 반환하고, 움직여주는 클래스

class CPosition
{
private:
	int x;
	int y;
public:
	CPosition();
	~CPosition();

	void SetPos(int _x, int _y);
	int GetX();
	int GetY();
	void Move(int _x, int _y);
};