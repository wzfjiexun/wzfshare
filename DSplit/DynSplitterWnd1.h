#pragma once
#ifndef _DYN_SPLITTER_H
#define _DYN_SPLITTER_H

// CDynSplitterWnd

class CDynSplitterWnd : public CSplitterWnd
{
public:
	DECLARE_DYNAMIC(CDynSplitterWnd)
	CDynSplitterWnd();
public:
	virtual ~CDynSplitterWnd();

public:
	BOOL	IsDynamic()
	{
		return m_bDynSplit;
	}
	void	SetDynamic(BOOL bDynSplit = TRUE)
	{
		m_bDynSplit = bDynSplit;
	}

public:
	BOOL	m_bDynSplit;
	CPoint  m_OldPoint;

	enum HitTestValue
	{
		noHit = 0,
		vSplitterBox = 1,
		hSplitterBox = 2,
		bothSplitterBox = 3,        // just for keyboard
		vSplitterBar1 = 101,
		vSplitterBar15 = 115,
		hSplitterBar1 = 201,
		hSplitterBar15 = 215,
		splitterIntersection1 = 301,
		splitterIntersection225 = 525
	};

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInvertTracker(const CRect& rect);
	virtual void StartTracking(int ht);
	virtual void StopTracking(BOOL bAccept);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#endif




