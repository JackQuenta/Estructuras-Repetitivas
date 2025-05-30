#include <iostream>
using namespace std;
int main(){
	int n, i, suma;
	cout<<"Ingrese cantidad de los primeros numeros naturales que desea sumar: "<<endl;
	cin>>n;
	suma=0;
	for (i=1 ; i<=n ; i++){
		suma=suma+i;
	}	
	cout<<"La suma de los primeros "<<n<<" numeros naturales es: "<<suma<<endl;
	return 0;
}
