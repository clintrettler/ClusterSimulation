#pragma once


// PrintToDialog dialog

class PrintToDialog : public CDialogEx
{
	DECLARE_DYNAMIC(PrintToDialog)

public:
	PrintToDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~PrintToDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCGUICLUSTERSIM_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
