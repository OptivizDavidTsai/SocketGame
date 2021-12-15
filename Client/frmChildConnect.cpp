<<<<<<< HEAD
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "frmChildConnect.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmConnectForm *frmConnectForm;
//---------------------------------------------------------------------------
__fastcall TfrmConnectForm::TfrmConnectForm(TComponent* Owner)
   : TForm(Owner)
{
   m_fpConnectEvent = NULL;
}
//---------------------------------------------------------------------------
void __fastcall TfrmConnectForm::bbtnConnectClick(TObject *Sender)
{
   if(m_fpConnectEvent != NULL)
   {
      m_fpConnectEvent(ledtServerIP->Text, ledtPort->Text.ToInt() );
   }
}
//---------------------------------------------------------------------------
void __fastcall TfrmConnectForm::FormClose(TObject *Sender,
      TCloseAction &Action)
{
   Action = caFree;
}
//---------------------------------------------------------------------------

=======
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "frmChildConnect.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmConnectForm *frmConnectForm;
//---------------------------------------------------------------------------
__fastcall TfrmConnectForm::TfrmConnectForm(TComponent* Owner)
   : TForm(Owner)
{
   m_fpConnectEvent = NULL;
}
//---------------------------------------------------------------------------
void __fastcall TfrmConnectForm::bbtnConnectClick(TObject *Sender)
{
   if(m_fpConnectEvent != NULL)
   {
      m_fpConnectEvent(ledtServerIP->Text, ledtPort->Text.ToInt() );
   }
}
//---------------------------------------------------------------------------
void __fastcall TfrmConnectForm::FormClose(TObject *Sender,
      TCloseAction &Action)
{
   Action = caFree;
}
//---------------------------------------------------------------------------

>>>>>>> e001f7a86792921ce4f610aba5785cbd9d7ff7b2
