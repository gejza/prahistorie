
#ifndef _PRAHISTORIE_LIDA_APP_H_
#define _PRAHISTORIE_LIDA_APP_H_

class Pra : public HoeGame::HoeApp, public XHoe2DCallback

{
public:
	Pra(HOE_INSTANCE hInst,HoeGame::Console * con);
	virtual const char * GetAppName();

	void HOEAPI _Paint(IHoe2D *h);
};

#endif // _PRAHISTORIE_LIDA_APP_H_

