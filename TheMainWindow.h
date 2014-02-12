#include "afxwin.h"

class TheMainWindow : public CFrameWnd
{
public:
	TheMainWindow();	
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()	// define message map members for TheMainWindow
};
