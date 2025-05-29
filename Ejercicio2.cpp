#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese cualquier numero, para terminar ingrese uno negativo: "<<endl;
	do{
	cin>>n;
	}while (n>=0);	
	cout<<"Fin de la captura"<<endl;
	return 0;
}
