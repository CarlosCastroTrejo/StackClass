#include "Pila.h"
#include<iostream>
#include<string>

using namespace std;

Pila::Pila()
{
	top = NULL;
}

void Pila::push(int dato)
{
	NodoLigado *nuevo = new NodoLigado(dato);
	if (top == NULL) 
	{
		top = nuevo;
	}
	else
	{
		nuevo->setSig(top);
		top = nuevo;
	}
}
NodoLigado* Pila::pop()
{
	NodoLigado *nuevo = top;
	if (top == NULL) 
	{
		cout << "UNDERFLOW"<<endl;
	}
	else 
	{
		top = nuevo->getSig();
		return nuevo;
	}
}

NodoLigado* Pila::Tope()
{
	return top;
}

Pila::~Pila()
{
}
