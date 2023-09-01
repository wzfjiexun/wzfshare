#include "pch.h"
#include "DynSplitView2.h"
#include "DSplit.h"
IMPLEMENT_DYNCREATE(CDynSplitView2, CView)

CDynSplitView2::CDynSplitView2()
{
}
void CDynSplitView2::OnDraw(CDC* pDC)
{
	

}

BEGIN_MESSAGE_MAP(CDynSplitView2, CView)

	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()

BOOL CDynSplitView2::OnEraseBkgnd(CDC* pDC)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect rect;
	GetClientRect(&rect);

	pDC->FillSolidRect(&rect, ::GetSysColor(COLOR_WINDOW));

	return true;
}

CDSplitDoc* CDynSplitView2::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDSplitDoc)));
	return (CDSplitDoc*)m_pDocument;
}
