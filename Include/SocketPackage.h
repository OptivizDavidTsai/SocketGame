//---------------------------------------------------------------------------
#ifndef SocketPackageH
#define SocketPackageH
//---------------------------------------------------------------------------
struct TObjectPosition
{
   unsigned int iX;
   unsigned int iY;
};

enum EObjectEvent
{
   OE_Nane = 0,
   OE_Speedup,
};

union TObjectStatus
{
   
};
//---------------------------------------------------------------------------
struct SocketPackage
{
   TObjectPosition optUser;
   TObjectPosition optOpponent;
   TObjectPosition optBall;
   EObjectEvent oeUser;
   EObjectEvent oeOpponent;
};
//---------------------------------------------------------------------------
#endif
