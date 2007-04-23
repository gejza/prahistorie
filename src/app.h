
#ifndef _PRAHISTORIE_LIDA_APP_H_
#define _PRAHISTORIE_LIDA_APP_H_

class Pra : public HoeGame::HoeApp, public XHoe2DCallback

{
	HoeGame::Adventure::Theatre m_theat;
public:
	Pra(HOE_INSTANCE hInst,HoeGame::Console * con);
	virtual const char * GetAppName();

	void HOEAPI _Paint(IHoe2D *h);
};

extern HoeGame::Adventure::Kulission * fig;

#endif // _PRAHISTORIE_LIDA_APP_H_

