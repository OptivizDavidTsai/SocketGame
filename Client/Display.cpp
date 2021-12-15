//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Display.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmDisplay *frmDisplay;
//---------------------------------------------------------------------------
__fastcall TfrmDisplay::TfrmDisplay(TComponent* Owner)
   : TForm(Owner)
{
   m_mapDisplayObjects.clear();

  for(int i = 0; i < this->ComponentCount; i++ )         //**先寫死，固定將Tag不等於0的元件加入。 注意Tag不可重複!
   {
      if(this->Components[i]->Tag != 0)
      {
         m_mapDisplayObjects[this->Components[i]->Tag] = this->Components[i];
      }
   }

}
//---------------------------------------------------------------------------

void __fastcall TfrmDisplay::SetObjectPosition(TObjectAttribute _ObjectAttribute)
{
   if( AnsiString(m_mapDisplayObjects[_ObjectAttribute.m_iObjectId]->ClassName()) == "TShape" )
   {
      TShape* l_shpTmp  = dynamic_cast<TShape*>(m_mapDisplayObjects[_ObjectAttribute.m_iObjectId]);
      l_shpTmp->Left    = _ObjectAttribute.m_iPosX;
      l_shpTmp->Top     = _ObjectAttribute.m_iPosY;
   }
}
//---------------------------------------------------------------------------

void __fastcall TfrmDisplay::tmCheckBoundTimer(TObject *Sender)
{
   for(std::map<int, TComponent*>::iterator it = m_mapDisplayObjects.begin(); it != m_mapDisplayObjects.end(); it++)
   {
      if( AnsiString( (it->second)->ClassName()) == "TShape" )
      {
         TShape* l_shpTmp = dynamic_cast<TShape*>(it->second);
         if(l_shpTmp->Left < 10 - l_shpTmp->Width)
         {
            l_shpTmp->Left = 10 - l_shpTmp->Width;
         }
         else if(l_shpTmp->Left > this->Width - 25)
         {
            l_shpTmp->Left = this->Width - 25;
         }
      }
   }

}
//---------------------------------------------------------------------------


