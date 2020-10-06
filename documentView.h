
// documentView.h : CdocumentView 类的接口
//

#pragma once
#include "gdiplusheaders.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>

#define PI 3.1415926

using namespace std;
using namespace cv;


class CdocumentView : public CView
{
protected: // 仅从序列化创建
	CdocumentView();
	DECLARE_DYNCREATE(CdocumentView)

// 特性
public:
	CdocumentDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CdocumentView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnEdge();
	afx_msg void OnCrack();
private:
	UINT m_threshold;
	int m_small, m_big;
	int Flag;
public:
	//成员变量
	CString m_BmpName;                               //保存图像文件文件名
	CString m_EntName;                               //保存图像文件扩展名
	CBitmap m_Cbitmap;                               //创建位图对象
	CString m_FilePath;
	Mat m_SrcImg;
	Mat m_GrayImg;
	Mat m_CrackImg;
	Mat m_ParaImg;
	int m_imgcols, m_imgrows;
	int original[1292][964];
	double result[1292][964];
	//成员函数
	void ShowBitmap(CDC* pDC, CString BmpName);
private:
	UINT m_open;
	UINT m_number;
public:
	afx_msg void OnParameters();
	afx_msg void OnReplace();
	afx_msg void OnDepth();
	CString m_Filepath;
	afx_msg void On3drest();
private:
	int m_Point_x;
	int m_Point_y;
public:
	afx_msg void OnFuse();
	afx_msg void OnOther();
};

#ifndef _DEBUG  // documentView.cpp 中的调试版本
inline CdocumentDoc* CdocumentView::GetDocument() const
   { return reinterpret_cast<CdocumentDoc*>(m_pDocument); }
#endif

