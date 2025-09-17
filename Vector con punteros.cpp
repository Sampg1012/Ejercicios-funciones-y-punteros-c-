/*Rellenar un array de 10 numeros, posteriormente utilizando punteros indicar cuales son numeros pares y su
posicion en memoria*/

#include<iostream>
using namespace std;

int main()
{
	int array[10];
	int esPar; 
	int *ptr = &array[10];
	
	cout << "Rellenando el array" << endl;
	for(int i=0; i<10; i++)
	{ 
		cout << "Posicion [" << i <<"]: ";
		cin >> array[i];
	}//final del for
	
	cout << "Numeos pares del Vector" << endl;
	for(int i=0; i<10; i++)
	{
	
		if(array[i] % 2 == 0)
		{
			//cout << "El numero " << array[i]<<" es par" << endl;
			cout << array[i] << " " << " su direccion de memoria es " << (ptr + i) << endl;
		}
	
	}//final del for
	
	
	
}
