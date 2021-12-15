//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Control.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
struct TRecordKeys
{
   bool m_bLeft;
   bool m_bUp;
   bool m_bRight;
   bool m_bDown;

   __fastcall TRecordKeys() : m_bLeft(false), m_bUp(false), m_bRight(false), m_bDown(false){};
} g_rkKeyStatus;

//---------------------------------------------------------------------------
TfrmControl *frmControl;
//---------------------------------------------------------------------------
__fastcall TfrmControl::TfrmControl(TComponent* Owner)
   : TForm(Owner)
{
   m_fpSendControlMessage = NULL;
}
//---------------------------------------------------------------------------
void __fastcall TfrmControl::ApplicationEvents1ShortCut(TWMKey &Msg,
      bool &Handled)
{

   TControlMessage l_cmControlMessage;
   switch(Msg.CharCode)
   {
      case 37:
         g_rkKeyStatus.m_bLeft   = true;
      break;
      case 39:
         g_rkKeyStatus.m_bRight  = true;
      break;
      default:
      break;
   }

   if(m_fpSendControlMessage != NULL)
   {
      m_fpSendControlMessage(l_cmControlMessage);
   }
}
//---------------------------------------------------------------------------
//** 因為鍵盤持續按壓(KeyDown)前，會有防彈跳延遲。為了即時的送出所有按鍵，故使用計時器來處理。
void __fastcall TfrmControl::tmMainProcessTimer(TObject *Sender)
{
   bool l_bChangeState = false;
   TControlMessage l_cmControlMessage;

   if(g_rkKeyStatus.m_bLeft)
   {
      l_cmControlMessage.m_iXMoveInterval = -10;
      l_bChangeState = true;
   }

   if(g_rkKeyStatus.m_bRight)
   {
      l_cmControlMessage.m_iXMoveInterval = 10;
      l_bChangeState = true;
   }
   
   if(m_fpSendControlMessage != NULL && l_bChangeState)
   {
      m_fpSendControlMessage(l_cmControlMessage);
   }
}
//---------------------------------------------------------------------------
void __fastcall TfrmControl::ApplicationEvents1Message(tagMSG &Msg,
      bool &Handled)
{
   switch(Msg.message)
   {
      case WM_KEYUP:
      {
         switch(Msg.wParam)
         {
            case 37:
               g_rkKeyStatus.m_bLeft   = false;
            break;
            case 39:
               g_rkKeyStatus.m_bRight  = false;
            break;
            default:
            break;
         }
      }
      break;
   }
}
//---------------------------------------------------------------------------

