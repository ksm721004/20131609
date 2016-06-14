#include "Cursor.h"

CCursor::CCursor()
{
	pos = new CPosition();
	pos->SetPos(14, 10);
}

CCursor::~CCursor()
{
}

void CCursor::Render()
{
	CScreen::ScreenPrint(pos->GetX() * 2, pos->GetY(), "¡Ý");
}