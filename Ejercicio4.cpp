/*4: Se necesita un programa que solicite los N gastos realizados en un viaje. El programa
consultará si desea continuar ingresando gastos, y mostrara al final la suma de los N
gastos.*/
#include <iostream>
using namespace std;
int main(){
	double respuesta, gasto, totalgastado;
	totalgastado=0; //se inicializa un acumulador para acumular los gastos
	cout<<"Ingrese el primer gasto que realizo: "<<endl;
	cin>>gasto;
	totalgastado=totalgastado+gasto;
	cout<<"Desea ingresar mas gastos? (coloque 1 si desea continuar o cualquier otra tecla para finalizar)"<<endl;
	cin>>respuesta;
	while(respuesta==1){
	cout<<"Ingrese el siguiente gasto que realizo: "<<endl;
	cin>>gasto;
	totalgastado=totalgastado+gasto;
	cout<<"Desea ingresar mas gastos? (coloque 1 si desea continuar o cualquier otra tecla para finalizar)"<<endl;
	cin>>respuesta;
	}
	cout<<"La suma de todos sus gastos es: "<<totalgastado<<endl;	
	return 0;
}
