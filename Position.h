#pragma once

//��ǥ���� ���ϰ�, ��ȯ�ϰ�, �������ִ� Ŭ����

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