/*Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento del vector*/
#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Cantidad de numeros en el vector: ";
    cin >> N;

    int vector[N];
    int *ptr = vector; // Apunta al inicio del arreglo

    cout << "Rellenando vector..." << endl;
    for (int i=0; i<N; i++)
	{
        cout << "Posicion [" << i << "]: ";
        cin >> *(ptr + i); // Usando puntero para ingresar datos
    }

    int menor = *ptr; // Inicializamos con el primer elemento

    for (int i=1; i<N; i++) 
	{
        if (*(ptr + i) < menor) 
		{
            menor = *(ptr + i);
        }
    }

    cout << "El menor es: " << menor << endl;

    return 0;
}
