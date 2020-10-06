// Threshold.cpp : 实现文件
//

#include "stdafx.h"
#include "document.h"
#include "Threshold.h"
#include "afxdialogex.h"


// CThreshold 对话框

IMPLEMENT_DYNAMIC(CThreshold, CDialogEx)

CThreshold::CThreshold(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DLG_EDGE, pParent)
	, m_Threshold(0)
	, m_open(0)
{

}

CThreshold::~CThreshold()
{
}

void CThreshold::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_EDGE, m_Threshold);
	DDX_Text(pDX, IDC_EDIT_OPEN, m_open);
}


BEGIN_MESSAGE_MAP(CThreshold, CDialogEx)
END_MESSAGE_MAP()


// CThreshold 消息处理程序


BOOL CThreshold::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	SetWindowText(L"边缘检测");

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
