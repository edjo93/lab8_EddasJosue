#ifndef PARTIDA_H
#define PARTIDA_H 
	#include<string>
	using std::string;

	#include<vector>
	using std::vector;

	class Partida
	{
	private:
		string nombre;	
		string nombre_pieza;
		vector<string*>movimientos;
	public:
		guardarPartida();
		
	};


#endif					