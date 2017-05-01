#pragma once


// ADDFRAME dialog

class ADDFRAME : public CDialogEx
{
	DECLARE_DYNAMIC(ADDFRAME)

public:
	ADDFRAME(CWnd* pParent = NULL);   // standard constructor
	virtual ~ADDFRAME();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeAddNumberNodes();
};
