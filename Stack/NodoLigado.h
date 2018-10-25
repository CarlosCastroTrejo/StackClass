#pragma once
#include<iostream>
using namespace std;

class NodoLigado
{
	int dato;
	NodoLigado *sig;
public:
	NodoLigado();
	NodoLigado(int);

	void setSig(NodoLigado*);
	NodoLigado* getSig();
	int getDato();


	friend ostream& operator<<(ostream&, NodoLigado *);

	~NodoLigado();
};

