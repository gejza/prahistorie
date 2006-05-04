
#ifndef _PRAHISTORIE_LIDA_APP_H_
#define _PRAHISTORIE_LIDA_APP_H_

class Pra : public HoeGame::HoeApp
{
public:
	Pra(HOE_INSTANCE hInst,HoeGame::Console * con);
	virtual const char * GetAppName();
};

#endif // _PRAHISTORIE_LIDA_APP_H_

