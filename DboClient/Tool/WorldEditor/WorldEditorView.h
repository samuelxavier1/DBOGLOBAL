// WorldEditorView.h : iCWorldEditorView Ŭ������ �������̽�
//


#pragma once


class CWorldEditorView : public CView
{
protected: // serialization������ ��������ϴ�.
	CWorldEditorView();
	DECLARE_DYNCREATE(CWorldEditorView)

// Ư��
public:
	CWorldEditorDoc* GetDocument() const;

// �۾�
public:

// ������
	public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ����
public:
	virtual ~CWorldEditorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// �޽��� �� �Լ��� �����߽��ϴ�.
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
};

#ifndef _DEBUG  // WorldEditorView.cpp�� ����� ����
inline CWorldEditorDoc* CWorldEditorView::GetDocument() const
   { return reinterpret_cast<CWorldEditorDoc*>(m_pDocument); }
#endif
