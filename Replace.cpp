// Replace.cpp : 实现文件
//

#include "stdafx.h"
#include "document.h"
#include "Replace.h"

using namespace std;
using namespace cv;

// CReplace 对话框

IMPLEMENT_DYNAMIC(CReplace, CDialogEx)

CReplace::CReplace(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIG_REPLACE, pParent)
	, m_FilePath(_T(""))
	, m_Number(0)
{

}

CReplace::~CReplace()
{
}

void CReplace::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_FilePath, m_FilePath);
	DDX_Text(pDX, IDC_Number, m_Number);
}


BEGIN_MESSAGE_MAP(CReplace, CDialogEx)
	ON_BN_CLICKED(IDC_Choose, &CReplace::OnBnClickedChoose)
END_MESSAGE_MAP()


// CReplace 消息处理程序


BOOL CReplace::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	SetWindowText(L"初值替换");
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CReplace::OnBnClickedChoose()
{
	// TODO: 在此添加控件通知处理程序代码
	BROWSEINFO bi;
	ZeroMemory(&bi, sizeof(BROWSEINFO));
	bi.hwndOwner = m_hWnd;
	bi.ulFlags = BIF_RETURNONLYFSDIRS;
	LPITEMIDLIST pidl = SHBrowseForFolder(&bi);
	BOOL bRet = FALSE;
	TCHAR szFolder[MAX_PATH * 2];
	szFolder[0] = _T('/0');
	if (pidl)
	{
		if (SHGetPathFromIDList(pidl, szFolder))
			bRet = TRUE;
		IMalloc *pMalloc = NULL;
		if (SUCCEEDED(SHGetMalloc(&pMalloc)) && pMalloc)
		{
			pMalloc->Free(pidl);
			pMalloc->Release();
		}
	}
	m_FilePath = szFolder;//选择的文件夹路径 
	//MessageBox(m_FilePath);
	UpdateData(FALSE);
}
