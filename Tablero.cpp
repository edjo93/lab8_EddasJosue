#include"Tablero.h"

Tablero::Tablero(){//valores por defecto
	tablero=NULL;
	size=8;
}

char** Tablero::generar(){
	tablero=new char*[8];
	for (int i = 0; i < size; ++i)
	{
		tablero[i]=new char[size];
	}
	return tablero;
}
