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

void TheMainWindow::OnLButtonDown(UINT nFlags, CPoint point)
{
	CRect rect;
	GetClientRect(&rect); // this is NOT a DC used within OnPaint() handler, this one can be used outside of it!

	CClientDC dc(this);

	// Draws a line from each corner to its opposite opposite corner
	
	dc.MoveTo(rect.left, rect.top);
	dc.LineTo(rect.right, rect.bottom);
	dc.MoveTo(rect.right, rect.top);
	dc.LineTo(rect.left, rect.bottom);
}

//Used to draw on Non client area such as title bars etc...
void TheMainWindow::OnNcPaint(void)
{
	CRect rect;
	GetClientRect(&rect);

	// CWindowDC is used to draw on the Non-Client area of the window...
	CWindowDC dc(this);
	dc.DrawTextExW(_T("Hello"), &rect, DT_CENTER, NULL);
	
	//CClientDC is used to draw on the whole screen, not specificly the client ( see, no CWnd passed in, ie NULL )
	CClientDC cdc(NULL); // access the whole screen!
	dc.Ellipse(0, 0, 100, 100);

}

// This is a global declaration of the Applications, message map.
// Note that to use this, you needed to have DECLARE_MESSAGE_MAP in the header,
// because that defines functions in the class that this macro uses, specifically
// to link TheMainWindow class with the function names specificed below.

BEGIN_MESSAGE_MAP(TheMainWindow, CFrameWnd)
	ON_WM_PAINT()  //this becomes TheMainWindow::OnPaint  - see code as &ThisClass OnPaint
	ON_WM_LBUTTONDOWN()
	ON_WM_NCPAINT()
END_MESSAGE_MAP()
