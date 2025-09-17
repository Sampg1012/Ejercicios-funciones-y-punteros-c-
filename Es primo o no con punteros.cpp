/*Determinar si un numero es primo o no; con punteros y ademas indicar en que posicion de memoria se guardo el numero*/

#include<iostream>
using namespace std;


int main(){
	
	int num;
	int *p = &num;
	int esPrimo;
	
	cout << "Ingrese un numero: "; cin >> num;
	if(num <= 1)
	{
		cout << "No es primo" << endl;
	}
	else
	{
		for(int i=1; i<=num; i++)
		{
		
			if(num % i == 0)
			{
				esPrimo++;
			}
		}
		
		
		if(esPrimo >= 2)
		{
			cout << num << " Es Primo" << endl;
		}
		else
		{
			cout << num << " No es primo "<< endl;
		}	
		
	}
	
	cout << "Se esta guardando en la posicion de memoria: " << p << endl;
	
	return 0;	
}
