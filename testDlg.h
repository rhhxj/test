
// testDlg.h : ͷ�ļ�
//

#pragma once


// CtestDlg �Ի���
class CtestDlg : public CDialogEx
{
// ����
public:
	CtestDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_TEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_str;
	double temp;
	int flag;
	afx_msg void OnBnClicked1();
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedJian();
	afx_msg void OnBnClickedCheng();
	afx_msg void OnBnClickedChu();
	afx_msg void OnBnClickedcalcuator();
	afx_msg void OnBnClickedDot();
	afx_msg void OnBnClickedClear();
	afx_msg void OnBnClicked0();
	afx_msg void OnClickedDel();
	afx_msg void OnClickedButton1();
	afx_msg void OnClickedPingfang();
};
