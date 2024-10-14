#include <iostream>
using namespace std;

void modificar(int a[]);

int main() {
    int a[3];
    
    cout << "Desde main, antes de llamar a la función:\n";
    for (int cont = 0; cont < 3; ++cont) {
        a[cont] = cont + 1;
        cout << "a[" << cont << "] = " << a[cont] << endl;
    }

    modificar(a);

    cout << "Desde main, después de llamar a la función:\n";
    for (int cont = 0; cont < 3; ++cont) {
        cout << "a[" << cont << "] = " << a[cont] << endl;
    }

    return 0;
}

void modificar(int a[]) {
    for (int cont = 0; cont < 3; ++cont) {
        a[cont] = -9;
        cout << "a[" << cont << "] = " << a[cont] << endl;
    }
}
