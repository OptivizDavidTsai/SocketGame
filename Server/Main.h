//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <ScktComp.hpp>
#include <list>
//---------------------------------------------------------------------------
#include "SocketPackage.h"
//---------------------------------------------------------------------------
struct MySockectPackage : public SocketPackage
{
   union uProcessIP
   {
      char sSenderIP[10];
      char sReceiverIP[10];
   };
};

class MyRoom
{
private:
   std::list<AnsiString> m_listMembers;
   SocketPackage m_spRoomData;
public:

};

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
   TServerSocket *ServerSocket1;
   TGroupBox *GroupBox1;
   TLabeledEdit *ledtPort;
   TRichEdit *redtLog;
   TSpeedButton *sbnServerOn;
   TTimer *tmPost;
   TTimer *tmRead;
   void __fastcall sbnServerOnClick(TObject *Sender);
   void __fastcall ServerSocket1Accept(TObject *Sender,
          TCustomWinSocket *Socket);
   void __fastcall ServerSocket1ClientConnect(TObject *Sender,
          TCustomWinSocket *Socket);
   void __fastcall ServerSocket1ClientDisconnect(TObject *Sender,
          TCustomWinSocket *Socket);
   void __fastcall ServerSocket1ClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
private:	// User declarations
   void __fastcall WriteLog(AnsiString _sLogMsg);
public:		// User declarations
   __fastcall TForm1(TComponent* Owner);
protected:
   virtual void __fastcall ProcessRead(MySockectPackage _MySockectPackage);
   virtual void __fastcall ProcessSend(MySockectPackage _MySockectPackage);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
