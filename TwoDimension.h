#pragma once
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>


// CTwoDimension 对话框

class CTwoDimension : public CDialogEx
{
	DECLARE_DYNAMIC(CTwoDimension)

public:
	CTwoDimension(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CTwoDimension();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_PARA };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	UINT m_length;
	double m_dirrecttion;
	double m_lwr;
	double m_circle;
	double m_rect;
	CString m_position;
	cv::Mat m_image;
};
