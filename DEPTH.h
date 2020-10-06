#pragma once


// CDEPTH 对话框

class CDepth : public CDialogEx
{
	DECLARE_DYNAMIC(CDepth)

public:
	CDepth(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDepth();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_DEPTH };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_depth;
	virtual BOOL OnInitDialog();
};
