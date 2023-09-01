#pragma once
#include <afxwin.h>
#include "pch.h"
#include"DSplitDoc.h"
class CDynSplitView2 : public CView
{
protected:
	CDynSplitView2();
	DECLARE_DYNCREATE(CDynSplitView2)
public:
	CDSplitDoc* GetDocument();

	DECLARE_MESSAGE_MAP()

	virtual void OnDraw(CDC* pDC);

public:
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};

