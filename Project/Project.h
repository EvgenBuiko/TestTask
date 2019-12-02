
// Project.h: основной файл заголовка для приложения Project
//
#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"       // основные символы
#include "PMover.h"

// CProjectApp:
// Сведения о реализации этого класса: Project.cpp
//

class CProjectApp : public CWinApp
{
public:
	CProjectApp() noexcept;
	int buf_obj_type;
	PMover move_tool;

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация
	afx_msg void OnAppAbout();
	afx_msg void CreateTriangle();
	afx_msg void CreateRectangle();
	afx_msg void CreateEllipse();
	afx_msg void MoveObject();
	afx_msg void CreateConnection();
	DECLARE_MESSAGE_MAP()
};

extern CProjectApp theApp;
