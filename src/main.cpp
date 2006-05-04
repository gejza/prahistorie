
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
	CVar::GetVar("engine")->Set("../Hoe/bin/Hoe3Dd_D3D9.dll");
	CVar::GetVar("height")->Set(600);
	CVar::GetVar("width")->Set(800);
	CVar::GetVar("fullscreen")->Set(false);
	if (!app.Init("Prahistorie Lida"))
	{
		app.HandleError();
		return 0;
	}
	app.GetFS()->AddResourceFile("data/tex.hx");
	IHoeScene * s = app.GetEngine()->CreateScene(HOETS_NORMAL);
	s->Set2DCallback(&app);
	app.GetEngine()->SetActiveScene(s);
	app.Run();
	app.Destroy();
	return 0;
}
