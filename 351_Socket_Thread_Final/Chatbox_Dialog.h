#pragma once
#include "afxwin.h"


// Chatbox_Dialog dialog

class Chatbox_Dialog : public CDialog
{
	DECLARE_DYNAMIC(Chatbox_Dialog)

public:
	Chatbox_Dialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~Chatbox_Dialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHATBOX_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	// string entered by the user to send through chat
	CString user_input;
	CString username;
	// name for the chat string variable
	CEdit m_chatMsg;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	CEdit m_userInput;
	afx_msg void OnBnClickedButton1();
	CString chatMsg;
	CString chat;
	afx_msg void OnCbnSelchangeCombo2();
	CComboBox m_broadcast;
	CString broadcast;
};
