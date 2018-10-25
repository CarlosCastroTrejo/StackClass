#pragma once
#include"NodoLigado.h"
#include<iostream>
using namespace std;

class Pila
{
	NodoLigado *top;
public:
	Pila();

	void push(int);
	NodoLigado* pop();
	NodoLigado* Tope();
	~Pila();
};

