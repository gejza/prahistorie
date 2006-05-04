
#include "StdAfx.h"
#include "app.h"

Pra::Pra(HOE_INSTANCE hInst,HoeGame::Console * con) : HoeApp(hInst, con)
{
}

const char * Pra::GetAppName()
{
	return "prahistorie";
}

void Pra::_Paint(IHoe2D *h)
{
	static IHoePicture * pic = (IHoePicture*)GetEngine()->Create("picture sc12");
	static IHoePicture * pic2 = (IHoePicture*)GetEngine()->Create("picture vlevo");
	h->SetRect(200,150);
	h->BltFast(0,200,0,150,pic);
	h->SetRect(200,150);
	// vypocitat snimek
	THoeRect d = { 100, 70, 125, 100};
	int i = ((int)(GetEngine()->SysFloatTime() * 20) % 7);
	i = 6-i;
	THoeRect s = { 1/8.f * i, 0, 1/8.f * (i+1), 1};
	h->Blt(&d,pic2,&s);

	/*h->BltFast(50,85,50,70,pic[1]);
	//h->BltFast(0,200,150,300,pic[2]);
	//h->BltFast(200,400,150,300,pic[3]);
	h->SetRect(200,480);
	h->SetRect(0,0);
	f->DrawText(100,100,0xffff0000,"Hoe Tutorial Paint 2D!");
	h->SetRect(400,300);
	f2->DrawText(50,250,0xff00ff00,"Mixle v Pixle");*/

}

