#ifndef REINA_H
#define REINA_H 
	#include"Pieza.h"//agragamos la clase pieza
	class Reyna:public Pieza
	{
		string nombre;
	public:
		Reyna();
		string getNombre();
		bool validarMovimiento(string,char**);
		
	};
	
#endif