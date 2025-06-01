/*5: Un profesor necesita un programa que solicite las notas de N estudiantes del curso ha
dictado en la universidad nacional Jorge Basadre Grohmann. El programa consultará si
desea continuar ingresando notas, y mostrará al final la cantidad de aprobados y
desaprobados y el promedio del salón*/
#include <iostream>
using namespace std;
int main(){
	double notas, suma, promedio;
	int aprobados, desaprobados, respuesta;
	promedio=0; 
	suma=0; //acumulador de notas
	desaprobados=0; //acumulador de desaprobados
	aprobados=0;//acumulador de aprobados
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
