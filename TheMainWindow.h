#include "afxwin.h"

class TheMainWindow : public CFrameWnd
{
public:
	TheMainWindow(void);	
protected:
	afx_msg void OnPaint();
	afx_msg void OnNcPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	DECLARE_MESSAGE_MAP()	// define message map members for TheMainWindow
};
