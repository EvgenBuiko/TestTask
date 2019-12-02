#include "stdafx.h"
#include "PEllipse.h"


PEllipse::PEllipse(CPoint lt, CPoint rb) : PObject(lt, rb) {}
void PEllipse::OnDraw(CDC* pDC) { pDC->Ellipse(lt.x, lt.y, rb.x, rb.y); }
PEllipse::~PEllipse() { }
