#include <afxwin.h>
#include "TheApp.h"
#include "TheMainWindow.h"

BOOL TheApp::InitInstance()
{
	// Start the application code...

	// First Every Application has a window, so set its Window to my Window class I made called TheMainWindow
	m_pMainWnd = new TheMainWindow;
	m_pMainWnd->ShowWindow(m_nCmdShow); // Actually now show it
	m_pMainWnd->UpdateWindow();
	return TRUE;

}