
// 351_Socket_Thread_FinalDlg.cpp : implementation file
//

#include "stdafx.h"
#include "351_Socket_Thread_Final.h"
#include "351_Socket_Thread_FinalDlg.h"
#include "Chatbox_Dialog.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy351_Socket_Thread_FinalDlg dialog



CMy351_Socket_Thread_FinalDlg::CMy351_Socket_Thread_FinalDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MY351_SOCKET_THREAD_FINAL_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy351_Socket_Thread_FinalDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_username);
}

BEGIN_MESSAGE_MAP(CMy351_Socket_Thread_FinalDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CMy351_Socket_Thread_FinalDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CMy351_Socket_Thread_FinalDlg message handlers

BOOL CMy351_Socket_Thread_FinalDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMy351_Socket_Thread_FinalDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMy351_Socket_Thread_FinalDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CMy351_Socket_Thread_FinalDlg::OnBnClickedOk()
{
	CString s;
	Chatbox_Dialog D1;
	m_username.GetWindowText(s);
	if (s == "") {
		MessageBox(_T("Please enter a username!!!"), _T("ERROR"));
	}
	else {
		UpdateData(true);
		D1.username = s;
		m_username.
		UpdateData(false);
		OnOK();             // Currently closes current dialog
		D1.DoModal();       // Opens the dialog
	}
}
