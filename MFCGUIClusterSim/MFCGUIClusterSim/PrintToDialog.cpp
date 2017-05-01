// PrintToDialog.cpp : implementation file
//

#include "stdafx.h"
#include "MFCGUIClusterSim.h"
#include "PrintToDialog.h"
#include "afxdialogex.h"
#include <string>


// PrintToDialog dialog

IMPLEMENT_DYNAMIC(PrintToDialog, CDialogEx)

PrintToDialog::PrintToDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFCGUICLUSTERSIM_DIALOG, pParent)
{

}

PrintToDialog::~PrintToDialog()
{
}

void PrintToDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(PrintToDialog, CDialogEx)
END_MESSAGE_MAP()


// PrintToDialog message handlers
