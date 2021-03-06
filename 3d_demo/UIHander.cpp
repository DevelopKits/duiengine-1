#include "StdAfx.h"
#include "UIHander.h"

#include "MainDlg.h"
#include "Dui3DPreview.h"

CUIHander::CUIHander(CMainDlg * pMainDlg) : m_pMainDlg(pMainDlg)
{
}

CUIHander::~CUIHander(void)
{
}

LRESULT CUIHander::OnInitDialog(HWND hWnd, LPARAM lParam)
{
	SetMsgHandled(FALSE); 

    return 0; 
}

void CUIHander::OnMsgBtnClick()
{
	DuiMessageBox(NULL,_T("messagebox test"),_T("tip"),MB_YESNOCANCEL|MB_ICONWARNING);
}

LRESULT CUIHander::OnSlider_RolateX( LPNMHDR pNmhdr )
{
	CDui3DPreview *p3dpreview=m_pMainDlg->FindChildByCmdID2<CDui3DPreview *>(image3dprev);
	if(p3dpreview)
	{
		LPDUINMSLIDER pnmslider=(LPDUINMSLIDER)pNmhdr;
		p3dpreview->Get3dParam().nRotateX=pnmslider->nPos;
		p3dpreview->Update();
	}
	return 0;
}

LRESULT CUIHander::OnSlider_RolateY( LPNMHDR pNmhdr )
{
	CDui3DPreview *p3dpreview=m_pMainDlg->FindChildByCmdID2<CDui3DPreview *>(image3dprev);
	if(p3dpreview)
	{
		LPDUINMSLIDER pnmslider=(LPDUINMSLIDER)pNmhdr;
		p3dpreview->Get3dParam().nRotateY=pnmslider->nPos;
		p3dpreview->Update();
	}
	return 0;
}

LRESULT CUIHander::OnSlider_RolateZ( LPNMHDR pNmhdr )
{
	CDui3DPreview *p3dpreview=m_pMainDlg->FindChildByCmdID2<CDui3DPreview *>(image3dprev);
	if(p3dpreview)
	{
		LPDUINMSLIDER pnmslider=(LPDUINMSLIDER)pNmhdr;
		p3dpreview->Get3dParam().nRotateZ=pnmslider->nPos;
		p3dpreview->Update();
	}
	return 0;
}

LRESULT CUIHander::OnSlider_OffsetZ( LPNMHDR pNmhdr )
{
	CDui3DPreview *p3dpreview=m_pMainDlg->FindChildByCmdID2<CDui3DPreview *>(image3dprev);
	if(p3dpreview)
	{
		LPDUINMSLIDER pnmslider=(LPDUINMSLIDER)pNmhdr;
		p3dpreview->Get3dParam().nOffsetZ=pnmslider->nPos;
		p3dpreview->Update();
	}
	return 0;
}