#ifndef TABLERO_H
#define TABLERO_H 
	class Tablero
	{
		char**tablero;
		int size;
	public:
		Tablero();//constructor por defecto
		char **generar();//genera un tablero y devuelve su referencia
		
	};

#endif
