#include "NodoLigado.h"



NodoLigado::NodoLigado() 
{
	this->dato = 0;
	this->sig = NULL;
}

NodoLigado::NodoLigado(int dato) 
{
	this->dato = dato;
	this->sig = NULL;
}

void NodoLigado::setSig(NodoLigado* s)
{
	this->sig = s;
}

NodoLigado* NodoLigado::getSig()
{
	return this->sig;
}

int NodoLigado::getDato()
{
	return this->dato;
}

NodoLigado::~NodoLigado()
{
}

ostream& operator<<(ostream &o, NodoLigado *nodo)
{
	if (nodo == NULL) 
	{
		o<< NULL;
	}
	else 
	{
		o << nodo->dato;
	}
	
	return o;
}
