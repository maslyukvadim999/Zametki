#pragma once


// Диалоговое окно Text

class Text : public CDialogEx
{
	DECLARE_DYNAMIC(Text)

public:
	Text(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~Text();
private: 

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION6_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
