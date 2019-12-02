
// ProjectView.h: интерфейс класса CProjectView
//

#pragma once
#include <vector>
#include "PObject.h"
#include "PToolComponent.h"

class CProjectView : public CView
{
private:
	PObject* Find(CPoint loc);

protected: // создать только из сериализации
	CProjectView() noexcept;
	DECLARE_DYNCREATE(CProjectView)

// Атрибуты
public:
	CProjectDoc* GetDocument() const;
	
	std::vector<PObject*> Objects;
	std::vector<PToolComponent*> Tools;
	PToolComponent* curr_tool;
	PObject* curr_obj;

// Операции
public:

// Переопределение
public:
	virtual void OnDraw(CDC* pDC);  // переопределено для отрисовки этого представления
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Реализация
public:
	virtual ~CProjectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	afx_msg void OnLButtonDown(UINT Flags, CPoint Location);
	afx_msg void OnLButtonUp(UINT Flags, CPoint Location);
	afx_msg void OnMouseMove(UINT Flags, CPoint Location);

protected:

// Созданные функции схемы сообщений
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // версия отладки в ProjectView.cpp
inline CProjectDoc* CProjectView::GetDocument() const
   { return reinterpret_cast<CProjectDoc*>(m_pDocument); }
#endif

