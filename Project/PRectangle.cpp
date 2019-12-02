#include "stdafx.h"
#include "PRectangle.h"

PRectangle::PRectangle(CPoint lt, CPoint rb) : PObject(lt, rb) {}
void PRectangle::OnDraw(CDC* pDC) { pDC->Rectangle(lt.x, lt.y, rb.x, rb.y); }
PRectangle::~PRectangle() {}
