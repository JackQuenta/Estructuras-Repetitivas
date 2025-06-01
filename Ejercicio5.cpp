#include <iostream>
using namespace std;
int main(){
	double respuesta, notas, suma, aprobados, desaprobados, promedio;
	promedio=0;
	suma=0;
	desaprobados=0;
	aprobados=0;
	cout<<"Ingrese la nota del estudiante: "<<endl;
	cin>>notas;
	suma=suma+notas;
	if (notas<=10.5){
		desaprobados=desaprobados+1;
	}else{
		aprobados=aprobados+1;
	}
	cout<<"Desea ingresar mas notas? (coloque 1 si desea continuar o cualquier otra tecla para finalizar)"<<endl;
	cin>>respuesta;
	while(respuesta==1){
		cout<<"Ingrese la nota de otro estudiante: "<<endl;
		cin>>notas;
		suma=suma+notas;
		if (notas<=10.5){
			desaprobados=desaprobados+1;
		}else{
			aprobados=aprobados+1;}
			cout<<"Desea ingresar mas notas? (coloque 1 si desea continuar o cualquier otra tecla para finalizar)"<<endl;
			cin>>respuesta;
		}
	promedio=suma/(aprobados+desaprobados);
	cout<<"El cantidad de aprobados es de: "<<aprobados<<endl;
	cout<<"El cantidad de desaprobados es de: "<<desaprobados<<endl;
	cout<<"El promedio del salon es de: "<<promedio<<endl;	
	return 0;
}
