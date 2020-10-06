#pragma once

#include <iostream>
#include <fstream>
#include <iomanip>
#include<math.h>
#include<stdlib.h>
#include <windows.h>
#include <opencv2/opencv.hpp>


// CReplace 对话框


class CReplace : public CDialogEx
{
	DECLARE_DYNAMIC(CReplace)

public:
	CReplace(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CReplace();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIG_REPLACE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_FilePath;
	UINT m_Number;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedChoose();
};
