#include <iostream>
#include "Pila.h"
using namespace std;

int main() 
{
	Pila myStack;
	myStack.pop();
	myStack.push(1);
	myStack.push(1);
	myStack.push(1);
	myStack.push(2);
	myStack.push(2);
	myStack.push(2);

	/*bool igual = true;

	while (igual)
	{
		int c = 0;
		cin >> c;
		if (c == 1) 
		{
			myStack.push(c);
		}
		else if (c == 2) 
		{
			if (myStack.pop()->getDato() != 1 )
			{
			
				igual = false;
				cout << "Errror";
			}
		}
		else 
		{

			igual = false;
			cout << "Errror";
		}


		
	}*/



	cout << myStack.pop() << endl;;

	system("pause");
	return EXIT_SUCCESS;
}