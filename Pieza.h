#ifndef PIEZA_H
#define PIEZA_H 
	#include<string>
	using std::string;

	class Pieza{
			
		public:
			virtual bool validarMovimiento(string,**char)=0;//coordenadas,tablero 


	};
	
#endif