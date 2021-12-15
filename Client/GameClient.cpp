//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GameClient.h"
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain *frmMain;

//---------------------------------------------------------------------------
void __fastcall TfrmMain::SendPackage(SocketPackage _SocketPackage)
{
   if(!ClientSocket1->Active)
   {
      return;
   }
   ClientSocket1->Socket->SendBuf((void*)&_SocketPackage, sizeof(SocketPackage));
}
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
   : TForm(Owner)
{
   m_opUser.iX = 340;
   m_opUser.iY = 516;
}
//---------------------------------------------------------------------------
__fastcall TfrmMain::~TfrmMain()
{
   if(m_frmConnectDialog != NULL)
   {
      delete m_frmConnectDialog;
   }

   if(m_frmControl != NULL)
   {
      delete m_frmControl;
   }

   if(m_frmDisplay != NULL)
   {
      delete m_frmDisplay;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::ConnectServer(AnsiString _sIP, int _iPort)
{
   ClientSocket1->Address  = _sIP;
   ClientSocket1->Port     = _iPort;
   ClientSocket1->Active   = true;

   m_frmConnectDialog->Close();
   m_frmConnectDialog = NULL;

   InitialSingleGame();
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::FormShow(TObject *Sender)
{
   m_frmConnectDialog         = new TfrmConnectForm(this);
   m_frmConnectDialog->m_fpConnectEvent   = ConnectServer;
   m_frmConnectDialog->Show();
   m_frmConnectDialog->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::SendControlMessage(TControlMessage _cmControlMessage)
{
   m_opUser.iX += _cmControlMessage.m_iXMoveInterval;
   m_opUser.iY += _cmControlMessage.m_iYMoveInterval;

   TObjectAttribute l_oaUser;
   l_oaUser.m_iObjectId = 101;
   l_oaUser.m_iPosX = m_opUser.iX;
   l_oaUser.m_iPosY = m_opUser.iY;
   //**先更新畫面
   m_frmDisplay->SetObjectPosition(l_oaUser);

   //**傳送目前座標給Server
   SocketPackage l_spSocketPackage;
   l_spSocketPackage.optUser.iX = m_opUser.iX;
   l_spSocketPackage.optUser.iY = m_opUser.iY;
   SendPackage(l_spSocketPackage);
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::InitialSingleGame(void)
{
   m_frmControl               = new TfrmControl(this);
   m_frmControl->m_fpSendControlMessage
                              = SendControlMessage;

   m_frmDisplay               = new TfrmDisplay(this);
   m_frmDisplay->Show();
}
//---------------------------------------------------------------------------

