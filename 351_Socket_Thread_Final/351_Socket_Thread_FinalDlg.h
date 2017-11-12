
// 351_Socket_Thread_FinalDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CMy351_Socket_Thread_FinalDlg dialog
class CMy351_Socket_Thread_FinalDlg : public CDialogEx
{
// Construction
public:
	CMy351_Socket_Thread_FinalDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY351_SOCKET_THREAD_FINAL_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// Holds the username entered by the user
	afx_msg void OnBnClickedOk();
	CEdit m_username;
};
