#ifndef MATRIZ
#define MATRIZ

class Nodo_Matriz{
	public:
		int fila, columna;
		char * valor;
		
		NodoMatriz *izq;
		NodoMatriz *der;
		NodoMatriz *arriba;
		NodoMatriz *abajo;
		NodoMatriz(int fila, int columna, char*valor);
		
};

class Guia{

	public:
		int id;
		Guia * sig;
		Guia * ant;
		NodoMatriz * entrada;
		Guia(int id);
}

class Lista_guias{
	Guia * prim;
	void insert(Guia * nuevo);
	Guia * getGuia(int id);
};

class Matriz{
	Lista_Guias * Nfilas;
	Lista_Guias * NColumnas;
	Matriz();
	void insertar(int fil, int columna, char * valor);
	void recFil();
	void recCol();
	void eliminar(int fila, int columna)
	void rep();
	NodoMatriz * buscar(int fila,int columna);	
};

#endif