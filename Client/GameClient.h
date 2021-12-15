//---------------------------------------------------------------------------

#ifndef GameClientH
#define GameClientH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ScktComp.hpp>

#include "frmChildConnect.h"
#include "SocketPackage.h"
#include "Display.h"
#include "Control.h"

#include <ExtCtrls.hpp>
#include <AppEvnts.hpp>
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:	// IDE-managed Components
   TClientSocket *ClientSocket1;
   TApplicationEvents *ApplicationEvents1;
   void __fastcall FormShow(TObject *Sender);
private:	// User declarations
   TfrmConnectForm* m_frmConnectDialog;
   TfrmDisplay* m_frmDisplay;
   TfrmControl* m_frmControl;
   SocketPackage m_spSocketPackage;

   TObjectPosition m_opUser;

protected:
   virtual void __fastcall SendPackage(SocketPackage _SocketPackage);
   virtual void __fastcall InitialSingleGame(void);	// User declarations

public:		// User declarations
   __fastcall TfrmMain(TComponent* Owner);
   virtual __fastcall ~TfrmMain();
   virtual void __fastcall ConnectServer(AnsiString _sIP, int _iPort);
   virtual void __fastcall SendControlMessage(TControlMessage _cmControlMessage);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
