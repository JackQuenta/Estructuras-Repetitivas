#include <iostream>
using namespace std;
int main(){
	float respuesta, gasto, totalgastado;
	totalgastado=0;
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
