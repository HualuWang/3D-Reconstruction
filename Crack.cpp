// Crack.cpp : 实现文件
//

#include "stdafx.h"
#include "document.h"
#include "Crack.h"
#include "afxdialogex.h"


// CCrack 对话框

IMPLEMENT_DYNAMIC(CCrack, CDialogEx)

CCrack::CCrack(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DLG_CRACK, pParent)
	, m_Small(0)
	, m_Big(0)
{

}

CCrack::~CCrack()
{
}

void CCrack::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_SMALL, m_Small);
	DDX_Text(pDX, IDC_EDIT_BIG, m_Big);
}


BEGIN_MESSAGE_MAP(CCrack, CDialogEx)
END_MESSAGE_MAP()


// CCrack 消息处理程序


BOOL CCrack::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	SetWindowText(L"提取裂纹");

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
