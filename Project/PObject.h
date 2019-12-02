#pragma once

enum ObjectType 
{
	ID_Triangle,
	ID_Rectangle,
	ID_Ellipse,
	ID_Line
};

class PObject
{
protected:
	CPoint lt, rb;

protected:
	PObject();
	PObject(CPoint lt, CPoint rb);
	
public:
	static PObject* CreateObject(ObjectType type, CPoint lt = CPoint(0, 0), CPoint rb = CPoint(0, 0));
	CPoint GetLeftTop() const;
	CPoint GetRightBottom() const;
	void SetLeftTop(CPoint new_lt);
	void SetRightBottom(CPoint new_rb);
	CPoint GetCenter() const;
	virtual void OnDraw(CDC* pDC) = 0;
	virtual ~PObject();
};

