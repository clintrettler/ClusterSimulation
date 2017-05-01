// ADDFRAME.cpp : implementation file
//

#include "stdafx.h"
#include "MFCGUIClusterSim.h"
#include "ADDFRAME.h"
#include "afxdialogex.h"


// ADDFRAME dialog

IMPLEMENT_DYNAMIC(ADDFRAME, CDialogEx)

ADDFRAME::ADDFRAME(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

ADDFRAME::~ADDFRAME()
{
}

void ADDFRAME::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ADDFRAME, CDialogEx)
	ON_EN_CHANGE(IDC_ADD_NUMBER_NODES, &ADDFRAME::OnEnChangeAddNumberNodes)
END_MESSAGE_MAP()


// ADDFRAME message handlers


void ADDFRAME::OnEnChangeAddNumberNodes()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here


}
