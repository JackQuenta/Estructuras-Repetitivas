/*3: Realizar un algoritmo que sume los N primeros números naturales usando bucles*/
#include <iostream>
using namespace std;
int main(){
	int n, i, suma; //se uso suma como acumulador de resultados al sumar.
	cout<<"Ingrese cantidad de los primeros numeros naturales que desea sumar: "<<endl;
	cin>>n;
	suma=0;
	for (i=1 ; i<=n ; i++){
		suma=suma+i;
	}	
	cout<<"La suma de los primeros "<<n<<" numeros naturales es: "<<suma<<endl;
	return 0;
}
