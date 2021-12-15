<<<<<<< HEAD
//---------------------------------------------------------------------------

#ifndef frmChildConnectH
#define frmChildConnectH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>

//---------------------------------------------------------------------------
typedef void __fastcall (__closure *Fp__Viod__Ansi__Int)(AnsiString _sIP, int _iPort);
//---------------------------------------------------------------------------
class TfrmConnectForm : public TForm
{
__published:	// IDE-managed Components
   TGroupBox *gbConnectInfo;
   TBitBtn *bbtnConnect;
   TLabeledEdit *ledtServerIP;
   TLabeledEdit *ledtPort;
   void __fastcall bbtnConnectClick(TObject *Sender);
   void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:

public:		// User declarations
   __fastcall TfrmConnectForm(TComponent* Owner);

   Fp__Viod__Ansi__Int m_fpConnectEvent;
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmConnectForm *frmConnectForm;
//---------------------------------------------------------------------------
#endif
=======
//---------------------------------------------------------------------------

#ifndef frmChildConnectH
#define frmChildConnectH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>

//---------------------------------------------------------------------------
typedef void __fastcall (__closure *Fp__Viod__Ansi__Int)(AnsiString _sIP, int _iPort);
//---------------------------------------------------------------------------
class TfrmConnectForm : public TForm
{
__published:	// IDE-managed Components
   TGroupBox *gbConnectInfo;
   TBitBtn *bbtnConnect;
   TLabeledEdit *ledtServerIP;
   TLabeledEdit *ledtPort;
   void __fastcall bbtnConnectClick(TObject *Sender);
   void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:

public:		// User declarations
   __fastcall TfrmConnectForm(TComponent* Owner);

   Fp__Viod__Ansi__Int m_fpConnectEvent;
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmConnectForm *frmConnectForm;
//---------------------------------------------------------------------------
#endif
>>>>>>> e001f7a86792921ce4f610aba5785cbd9d7ff7b2
