<<<<<<< HEAD
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("GameClient.cpp", frmMain);
USEFORM("frmChildConnect.cpp", frmConnectForm);
USEFORM("Display.cpp", frmDisplay);
USEFORM("Control.cpp", frmControl);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
   try
   {
       Application->Initialize();
       Application->CreateForm(__classid(TfrmMain), &frmMain);
       Application->Run();
   }
   catch (Exception &exception)
   {
       Application->ShowException(&exception);
   }
   catch (...)
   {
       try
       {
          throw Exception("");
       }
       catch (Exception &exception)
       {
          Application->ShowException(&exception);
       }
   }
   return 0;
}
//---------------------------------------------------------------------------
=======
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("GameClient.cpp", frmMain);
USEFORM("frmChildConnect.cpp", frmConnectForm);
USEFORM("Display.cpp", frmDisplay);
USEFORM("Control.cpp", frmControl);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
   try
   {
       Application->Initialize();
       Application->CreateForm(__classid(TfrmMain), &frmMain);
       Application->Run();
   }
   catch (Exception &exception)
   {
       Application->ShowException(&exception);
   }
   catch (...)
   {
       try
       {
          throw Exception("");
       }
       catch (Exception &exception)
       {
          Application->ShowException(&exception);
       }
   }
   return 0;
}
//---------------------------------------------------------------------------
>>>>>>> e001f7a86792921ce4f610aba5785cbd9d7ff7b2
