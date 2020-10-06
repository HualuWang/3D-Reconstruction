#pragma once


// CThreshold 对话框

class CThreshold : public CDialogEx
{
	DECLARE_DYNAMIC(CThreshold)

public:
	CThreshold(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CThreshold();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_EDGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	UINT m_Threshold;
	UINT m_open;
	virtual BOOL OnInitDialog();
};
