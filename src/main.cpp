
#include "StdAfx.h"
#include "app.h"

using namespace HoeGame;

#ifdef _WIN32

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE,LPSTR lpStr,int iCmdShow)
{
	SetRootFromInstance(hInstance); 
#else
int main(int argc,char * argv[])
{
	SetRootFromExe(argv[0]); 
	//HOE_INSTANCE hInstance = NULL;
#endif
	Console con;
	con.SetFileLogging("run.log");

	Pra app(hInstance, &con);
	CVar::GetVar("engine")->Set(".dll");
	if (!app.Init("Prahistorie Lida"))
	{
		app.HandleError();
		return 0;
	}

	app.Run();
	app.Destroy();
	return 0;
}
