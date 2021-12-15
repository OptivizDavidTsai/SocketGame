<<<<<<< HEAD
//---------------------------------------------------------------------------

#ifndef DisplayH
#define DisplayH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <map>
//---------------------------------------------------------------------------
struct TObjectAttribute
{
   int m_iObjectId;
   int m_iPosX;
   int m_iPosY;
};
//---------------------------------------------------------------------------
class TfrmDisplay : public TForm
{
__published:	// IDE-managed Components
   TShape *shpOpponent;
   TShape *shpBall;
   TShape *shpUser;
   TTimer *tmCheckBound;
   void __fastcall tmCheckBoundTimer(TObject *Sender);
private:	// User declarations
   std::map<int, TComponent*> m_mapDisplayObjects;
public:		// User declarations
   __fastcall TfrmDisplay(TComponent* Owner);
   virtual void __fastcall SetObjectPosition(TObjectAttribute _ObjectAttribute);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmDisplay *frmDisplay;
//---------------------------------------------------------------------------
#endif
=======
//---------------------------------------------------------------------------

#ifndef DisplayH
#define DisplayH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <map>
//---------------------------------------------------------------------------
struct TObjectAttribute
{
   int m_iObjectId;
   int m_iPosX;
   int m_iPosY;
};
//---------------------------------------------------------------------------
class TfrmDisplay : public TForm
{
__published:	// IDE-managed Components
   TShape *shpOpponent;
   TShape *shpBall;
   TShape *shpUser;
   TTimer *tmCheckBound;
   void __fastcall tmCheckBoundTimer(TObject *Sender);
private:	// User declarations
   std::map<int, TComponent*> m_mapDisplayObjects;
public:		// User declarations
   __fastcall TfrmDisplay(TComponent* Owner);
   virtual void __fastcall SetObjectPosition(TObjectAttribute _ObjectAttribute);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmDisplay *frmDisplay;
//---------------------------------------------------------------------------
#endif
>>>>>>> e001f7a86792921ce4f610aba5785cbd9d7ff7b2
