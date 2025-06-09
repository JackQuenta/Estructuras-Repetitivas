#include <iostream>
using namespace std;

int main() {
    int n, i, multiplo;

    cout << "=====================================" << endl;
    cout << "   MULTIPLOS POSITIVOS DE 7          " << endl;
    cout << "=====================================" << endl;
    
    cout << "Ingrese cuantos multiplos de 7 desea ver: ";
    cin >> n;

    if (n <= 0) {
        cout << "Numero ingresado invalido. Debe ser mayor que 0." << endl;
    } else {
        cout << "\nLos primeros " << n << " multiplos positivos de 7 son:" << endl;
        for (i = 1; i <= n; i++) {
            multiplo = 7 * i;
            cout << multiplo << endl;
        }
    }

    return 0;
}
