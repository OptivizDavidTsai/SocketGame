//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
   : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sbnServerOnClick(TObject *Sender)
{
   if(sbnServerOn->Down)
   {
      sbnServerOn->Caption = "Server Off";

      ServerSocket1->Port     = ledtPort->Text.ToInt();
      ServerSocket1->Active   = true;
   }
   else
   {
      sbnServerOn->Caption    = "Server On";
      ServerSocket1->Active   = false;
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WriteLog(AnsiString _sLogMsg)
{
   redtLog->Lines->Add(_sLogMsg);
   SendMessage(redtLog->Handle,EM_SCROLL,SB_LINEDOWN,0);

   if( redtLog->Lines->Count > 800 )
   {
      redtLog->Lines->Clear();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1Accept(TObject *Sender,
      TCustomWinSocket *Socket)
{
   WriteLog(Socket->RemoteAddress + " is Accept.");   
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
   WriteLog(Socket->RemoteAddress + " is Connected.");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientDisconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
   WriteLog(Socket->RemoteAddress + " is Disconnected.");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
   SocketPackage l_spSocketPackage;
   if( Socket->ReceiveBuf(&l_spSocketPackage, sizeof(l_spSocketPackage)) != -1 )
   {
      //**WriteLog(Socket->RemoteAddress + " X: " + l_spSocketPackage.optUser.iX + " Y: " + l_spSocketPackage.optUser.iY);

   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ProcessRead(MySockectPackage _MySockectPackage)
{
   //TODO: Add your source code here
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ProcessSend(MySockectPackage _MySockectPackage)
{
   //TODO: Add your source code here
}

//---------------------------------------------------------------------------
