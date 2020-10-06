#pragma once


// CCrack 对话框

class CCrack : public CDialogEx
{
	DECLARE_DYNAMIC(CCrack)

public:
	CCrack(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CCrack();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_CRACK };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int m_Small;
	int m_Big;
	virtual BOOL OnInitDialog();
};
