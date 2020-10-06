// Other.cpp : 实现文件
//

#include "stdafx.h"
#include "document.h"
#include "Other.h"
#include "afxdialogex.h"


// COther 对话框

IMPLEMENT_DYNAMIC(COther, CDialogEx)

COther::COther(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DLG_OTHER, pParent)
	, m_perimeter(0)
	, m_no(0)
	, m_distance(0)
	, m_angle(0)
	, m_peak(0)
	, m_coordinate(_T(""))
	, m_endpoint(_T(""))
	, m_angle1(0)
	, m_distance1(0)
	, m_endpoint1(_T(""))
{

}

COther::~COther()
{
}

void COther::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_PERIMETER, m_perimeter);
	DDX_Text(pDX, IDC_EDIT_NO, m_no);
	DDX_Text(pDX, IDC_EDIT_DISTANCE, m_distance);
	DDX_Text(pDX, IDC_EDIT_ANGLE, m_angle);
	DDX_Text(pDX, IDC_EDIT_PEAK, m_peak);
	DDX_Text(pDX, IDC_EDIT_COORDINATE, m_coordinate);
	DDX_Text(pDX, IDC_EDIT_ENDPOINT, m_endpoint);
	DDX_Text(pDX, IDC_EDIT_ANGLE2, m_angle1);
	DDX_Text(pDX, IDC_EDIT_DISTANCE2, m_distance1);
	DDX_Text(pDX, IDC_EDIT_ENDPOINT2, m_endpoint1);
}


BEGIN_MESSAGE_MAP(COther, CDialogEx)
END_MESSAGE_MAP()


// COther 消息处理程序


BOOL COther::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	SetWindowText(L"其他参数提取");
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
