/*1: Diseñar un algoritmo que imprima en la pantalla los primeros “n” múltiplos de 7 (positivos
mayores que cero)*/
#include <iostream>
using namespace std;
int main(){
	int n, i, multiplos7;
	cout<<"Ingrese cuantos primeros multiplos de 7 desea ver: "<<endl;
	cin>>n;
	if (n<=0){
		cout<<"Numero ingresado equivocado";	
	}else{
		cout<<"Los primeros "<<n<< " multiplos de 7 son: "<<endl;
		for (i=1 ; i<=n ; i++){
			multiplos7=7*i;
			cout<<multiplos7<<endl;
		}
	}
	return 0;
}
