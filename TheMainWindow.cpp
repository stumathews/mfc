#include "TheMainWindow.h"

TheMainWindow::TheMainWindow(void)
{
	// Ok, lets actually create ourselves, we are a CFrameWind after all!
	Create(NULL, _T("My First MFC Window, Baby!"));
}

// Now define the method that we specified in the message map

void TheMainWindow::OnPaint()
{
	// Lets Paint something!
	CPaintDC dc(this);  //obtain the DrawingContext of the window,
	CRect rect;
	GetClientRect(&rect); // fill in the structure with info form the window itself

	// do some drawing baby!
	dc.DrawText(_T("Hello World, I am a MFC program and I mean business!"), -1, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);

}

// This is a global declaration of the Applications, message map.
// Note that to use this, you needed to have DECLARE_MESSAGE_MAP in the header,
// because that defines functions in the class that this macro uses, specifically
// to link TheMainWindow class with the function names specificed below.

BEGIN_MESSAGE_MAP(TheMainWindow, CFrameWnd)
	ON_WM_PAINT()  //this becomes TheMainWindow::OnPaint  - see code as &ThisClass OnPaint
END_MESSAGE_MAP()
