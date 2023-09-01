
// DSplitView.h: CDSplitView 类的接口
//

#pragma once


class CDSplitView : public CView
{
protected: // 仅从序列化创建
	CDSplitView() noexcept;
	DECLARE_DYNCREATE(CDSplitView)

// 特性
public:
	CDSplitDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CDSplitView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // DSplitView.cpp 中的调试版本
inline CDSplitDoc* CDSplitView::GetDocument() const
   { return reinterpret_cast<CDSplitDoc*>(m_pDocument); }
#endif

