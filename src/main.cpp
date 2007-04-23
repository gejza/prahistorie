
#include "StdAfx.h"
#include "app.h"

using namespace HoeGame;
using namespace HoeGame::Adventure;

///////////////////////////////////////////
// nahravani sceny. specialni typ souboru
// objekty - stromova architektura
// vlastnosti
// podobjekty
// ulozeni scen a ruznych seznamu objektu
// kodovani base64 pro data!
// cteni bisonem?? // umi si davat veci dohromady....
// cteni jako pres xml parser -> vsechny tyto soubory muzou jit zkompilovat
// podobny format jako u bechera
//!dont edit!

// tak takovyto typ sceny by to chtelo zavest 
/*
jmeno objektu {
	neco = "neco"
	cislo = 0xff
	vektor = (0.f,0.f, 0.f)
	ukazatel = &ukazatel
	data = #KSSDJ434JJSDS342425KJSKJDKS34234234924JSKJADASD
	dalsi_objekt {
		taky je mozno....

	}
}

// nacitani
// bufferovane po objektech - lze se vratit v objektu dozadu
// callback ??
// mozna by byla lepsi metoda stylu ->
// get next object -> parse object
// skip to next object
// atd...
// takze bison se moc nehodi

// tenhle typ souboru se hodi vsude tam kde je potreba popsat objekty a vlastnosti

*/


///////////////////////////////////////////

#ifdef _WIN32

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE,LPSTR lpStr,int iCmdShow)
{
	SetRootFromInstance(hInstance); 
#else
int main(int argc,char * argv[])
{
	SetRootFromExe(argv[0]); 
	HOE_INSTANCE hInstance = NULL;
#endif
	Console con;
	con.SetFileLogging("run.log");

	Pra app(hInstance, &con);
	CVar::GetVar("engine")->Set("../Hoe/bin/Hoe3Dd_D3D9.dll");
	CVar::GetVar("height")->Set(600);
	CVar::GetVar("width")->Set(800);
	CVar::GetVar("fullscreen")->Set(false);
	if (!app.Init("Prahistorie Lida", HOESDK_VERSION))
	{
		app.HandleError();
		return 0;
	}
	app.GetFS()->AddResourceFile("data/tex.hx");
	app.GetFS()->AddResourceFile("data/angel.hm");
	app.GetFS()->AddResourceFile("data/jackolan.hm");
	Theatre t;
	t.Create();
	t.Load("scene.theatre");

	t.GetScene()->Set2DCallback(&app);
	app.GetEngine()->SetActiveScene(t.GetScene());
	app.Run();
	app.Destroy();
	return 0;
}
