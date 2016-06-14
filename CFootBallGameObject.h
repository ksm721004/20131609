#pragma once
#include <iostream>
#include "Screen.h"

#pragma warning (disable : 4996)

class CFootBallGameObject
{
private:
protected:
	int x, y; // x, y��ǥ
	int centerX, centerY; // x, y �� ��� ��ǥ
	int center; // �̸��� ���� ���� ��
	char *name; // �̸�
public:
	CFootBallGameObject();
	CFootBallGameObject(int x, int y, char *_name);

	~CFootBallGameObject();

	void Move(int _x, int _y); // ���� ��ǥ�κ��� ������
	void PointMove(int _x, int _y); // �Էµ� ��ǥ�� ������
	void Render(); // ��ü�� name�� ���
	int NameLen(); // ��ü�� name ���� ��ȯ
	int ReturnX(); // x��ǥ ��ȯ
	int ReturnY(); // y��ǥ ��ȯ
	int ReturnCenterX(); // centerX��ǥ ��ȯ
	int ReturnCenter(); // center �� ��ȯ
};