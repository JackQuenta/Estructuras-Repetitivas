#include <iostream>
using namespace std;
int main(){
	int n, i, multiplos7;
	cout<<Ingrese cuantos primeros multiplos de 7 desea ver: <<endl;
	cin>>n;
	cout<<Los primeros <<n<<  multiplos de 7 son: <<endl;
	for (i=1 ; i<=n ; i++){
		multiplos7=7*i;
		cout<<multiplos7<<endl;
	}	
	return 0;
}
