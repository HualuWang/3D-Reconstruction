// DEPTH.cpp : 实现文件
//

#include "stdafx.h"
#include "document.h"
#include "DEPTH.h"
#include "afxdialogex.h"


// CDEPTH 对话框

IMPLEMENT_DYNAMIC(CDepth, CDialogEx)

CDepth::CDepth(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DLG_DEPTH, pParent)
	, m_depth(0)
{

}

CDepth::~CDepth()
{
}

void CDepth::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_DEPTH, m_depth);
}


BEGIN_MESSAGE_MAP(CDepth, CDialogEx)
END_MESSAGE_MAP()


// CDEPTH 消息处理程序


BOOL CDepth::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	SetWindowText(L"深度提取");
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
