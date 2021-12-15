//---------------------------------------------------------------------------

#ifndef ControlH
#define ControlH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <AppEvnts.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
struct TControlMessage
{
   int m_iXMoveInterval;
   int m_iYMoveInterval;
   int m_iUserStatus;

   __fastcall TControlMessage() : m_iXMoveInterval(0), m_iYMoveInterval(0), m_iUserStatus(0){};
};
//---------------------------------------------------------------------------
typedef void __fastcall (__closure *Fp__Viod__TControlMessage)(TControlMessage _cmControlMessage);
//---------------------------------------------------------------------------
class TfrmControl : public TForm
{
__published:	// IDE-managed Components
   TApplicationEvents *ApplicationEvents1;
   TTimer *tmMainProcess;
   void __fastcall ApplicationEvents1ShortCut(TWMKey &Msg, bool &Handled);
   void __fastcall tmMainProcessTimer(TObject *Sender);
   void __fastcall ApplicationEvents1Message(tagMSG &Msg, bool &Handled);
private:	// User declarations

public:
   Fp__Viod__TControlMessage m_fpSendControlMessage;
public:		// User declarations
   __fastcall TfrmControl(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TfrmControl *frmControl;
//---------------------------------------------------------------------------
#endif
