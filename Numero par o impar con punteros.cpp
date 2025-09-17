/*Comprobar si un numero es par o impar, y señalar la posicion de memoria
donde se esta guardando el numero. Con punteros*/

#include<iostream>
using namespace std;


int main(){
	
	int num;
	int *p = &num;
	
	cout << "Ingrese un numero: "; cin >> num;
	if(num % 2 == 0)
	{
		cout << "El numero " << num <<" es par" << endl;
		
	}
	else
	{
		cout << "El numero " << num <<" es Impar" << endl;
	}
	
	cout << "Se esta guardando en la posicion de memoria: " << p << endl;
	
	return 0;	
}
