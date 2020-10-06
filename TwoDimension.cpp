// TwoDimension.cpp : 实现文件
//

#include "stdafx.h"
#include "document.h"
#include "TwoDimension.h"
#include "afxdialogex.h"


// CTwoDimension 对话框

IMPLEMENT_DYNAMIC(CTwoDimension, CDialogEx)

CTwoDimension::CTwoDimension(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DLG_PARA, pParent)
	, m_length(0)
	, m_dirrecttion(0)
	, m_lwr(0)
	, m_circle(0)
	, m_rect(0)
	, m_position(_T(""))
{

}

CTwoDimension::~CTwoDimension()
{
}

void CTwoDimension::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_LENGTH, m_length);
	DDX_Text(pDX, IDC_EDIT_DIRECTION, m_dirrecttion);
	DDX_Text(pDX, IDC_EDIT_LWR, m_lwr);
	DDX_Text(pDX, IDC_EDIT_CIRCLE, m_circle);
	DDX_Text(pDX, IDC_EDIT_RECT, m_rect);
	DDX_Text(pDX, IDC_EDIT_POSITION, m_position);
}


BEGIN_MESSAGE_MAP(CTwoDimension, CDialogEx)
END_MESSAGE_MAP()


// CTwoDimension 消息处理程序


BOOL CTwoDimension::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	SetWindowText(L"二维特征提取");

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
