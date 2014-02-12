
///This is our very own derived CWinApp, every MFC App has/needs one!
class TheApp : public CWinApp
{
public:
	virtual BOOL InitInstance(); // This is the first method called by the MFC Framework
};