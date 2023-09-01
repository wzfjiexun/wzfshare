
// DSplitView.cpp: CDSplitView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "DSplit.h"
#endif

#include "DSplitDoc.h"
#include "DSplitView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDSplitView

IMPLEMENT_DYNCREATE(CDSplitView, CView)

BEGIN_MESSAGE_MAP(CDSplitView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDSplitView 构造/析构

CDSplitView::CDSplitView() noexcept
{
	// TODO: 在此处添加构造代码

}

CDSplitView::~CDSplitView()
{
}

BOOL CDSplitView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDSplitView 绘图

void CDSplitView::OnDraw(CDC* /*pDC*/)
{
	CDSplitDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDSplitView 打印

BOOL CDSplitView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CDSplitView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CDSplitView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CDSplitView 诊断

#ifdef _DEBUG
void CDSplitView::AssertValid() const
{
	CView::AssertValid();
}

void CDSplitView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDSplitDoc* CDSplitView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDSplitDoc)));
	return (CDSplitDoc*)m_pDocument;
}
#endif //_DEBUG


// CDSplitView 消息处理程序
