#pragma once

#include<afxframewndex.h>

class MainFrm: public CFrameWndEx
{
public:
	MainFrm();
	DECLARE_MESSAGE_MAP();
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint Point);
};

/*
 * DECLARE_MESSAGE_MAP();: A macro provided by MFC framework to declare message map for the class. A message map is a table that maps
 *                         windows messages to their corresponding message handler functions in MFC classes.
 * 
 * afx_msg: A macro provided by MFC, which stands for "Application Framework Extension message". It is used to declare that a function is a message handler function.
 *          Ensures correct linkage and proper handling of the of the message by the MFC framework.
 * 
 * UINT nFlags: Indicates the state of various virtual keys at the time the message is generated. For example, whether the Shift or Ctrl keys are pressed.
 * 
 * CPoint Point: Contains the x and y coordinates of the cursor at the time the message is generated.
 */