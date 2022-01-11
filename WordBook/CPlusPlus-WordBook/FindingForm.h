#ifndef _FINDINGFORM_H
#define _FINDINGFORM_H
#include<afxwin.h>//CDialog�������
#include "resource.h"

typedef signed long int Long;
class WordBookForm;

class FindingForm :public CDialog
{
public:
	enum{IDD=IDD_FINDINGFORM};
public:
	WordBookForm* wordBookForm;
public:
	FindingForm(CWnd* parent = NULL);//������, NULL�� ����Ʈ��
	virtual BOOL OnInitDialog();
protected://#
	afx_msg void OnFindButtonClicked();
	afx_msg void OnRadioButtonSpellingsClicked();
	afx_msg void OnRadioButtonMeaningsClicked();
	afx_msg void OnListViewItemDoubleClicked(NMHDR* lpNotifyStruct, LRESULT* result);
	afx_msg void OnClose();
	DECLARE_MESSAGE_MAP()
private:
	Long(*indexes);
	Long count;
};

#endif // !_FINDINGFORM_H
