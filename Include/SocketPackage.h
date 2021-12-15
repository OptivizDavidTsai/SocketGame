<<<<<<< HEAD
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
=======
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
>>>>>>> e001f7a86792921ce4f610aba5785cbd9d7ff7b2
