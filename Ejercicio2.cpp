/*2: Leer números por teclado hasta introducir uno negativo; en ese momento imprimir “Fin
de la captura” y terminar.*/
#include <iostream>
using namespace std;
int main(){
	double numero;
	cout<<"Ingrese cualquier numero, para terminar ingrese uno negativo: "<<endl;
	do{
	cin>>numero;
	}while (numero>=0);	
	cout<<"Fin de la captura"<<endl;
	return 0;
}
