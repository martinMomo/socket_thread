// Chatbox_Dialog.cpp : implementation file
//

#include "stdafx.h"
#include "351_Socket_Thread_Final.h"
#include "351_Socket_Thread_FinalDlg.h"
#include "Chatbox_Dialog.h"
#include "afxdialogex.h"


// Chatbox_Dialog dialog

IMPLEMENT_DYNAMIC(Chatbox_Dialog, CDialog)

Chatbox_Dialog::Chatbox_Dialog(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_CHATBOX_DIALOG, pParent)
	, user_input(_T(""))
	, chatMsg(_T(""))
	, broadcast(_T(""))
{

}

Chatbox_Dialog::~Chatbox_Dialog()
{
}

void Chatbox_Dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, user_input);
	DDX_Control(pDX, IDC_EDIT1, m_chatMsg);
	DDX_Control(pDX, IDC_EDIT2, m_userInput);
	DDX_Text(pDX, IDC_EDIT1, chatMsg);
	DDX_Control(pDX, IDC_COMBO2, m_broadcast);
	DDX_CBString(pDX, IDC_COMBO2, broadcast);
}


BEGIN_MESSAGE_MAP(Chatbox_Dialog, CDialog)
	ON_EN_CHANGE(IDC_EDIT1, &Chatbox_Dialog::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &Chatbox_Dialog::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &Chatbox_Dialog::OnBnClickedButton1)
	ON_CBN_SELCHANGE(IDC_COMBO2, &Chatbox_Dialog::OnCbnSelchangeCombo2)
END_MESSAGE_MAP()


// Chatbox_Dialog message handlers


void Chatbox_Dialog::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void Chatbox_Dialog::OnEnChangeEdit2()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	m_userInput.SetFocus();
}


void Chatbox_Dialog::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	CString s;
	m_userInput.GetWindowText(s);
	if (s == "") {
		MessageBox(_T("Please enter a message!!!"), _T("ERROR"));
	}
	else if (m_broadcast.GetCurSel() == -1) {
		MessageBox(_T("Please select an address!!!"), _T("ERROR"));
	}
	else {
		UpdateData(true);
		chatMsg = username + ": " + s + _T("\r\n");
		chat = chat + chatMsg;
		UpdateData(false);
		m_chatMsg.SetWindowText(chat);
		m_userInput.SetWindowTextW(_T(""));
		m_userInput.SetFocus();
	}
}


void Chatbox_Dialog::OnCbnSelchangeCombo2()
{
	// TODO: Add your control notification handler code here
}
