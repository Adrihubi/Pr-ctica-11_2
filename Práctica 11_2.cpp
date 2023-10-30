#include <iostream>
#include <string>

using namespace std;

int main() {
    int NUM, RESUL, T, I;
    string linea;
    cout << "CUANTAS TABLAS: ";
    getline(cin, linea);
    NUM = stoi(linea);
    T = 1;
    while (T <= NUM) {
        I = 10;
        while (!(I < 1)) {
            RESUL = T * I;
            cout << T << " * " << I << " = " << RESUL << endl;
            I = I + 1;
        }
        cout << "Pulse una tecla: ";
        getline(cin, linea);
        T = T + 1;
    }
    cout << "Pulse una tecla: ";
    getline(cin, linea);
    return 0;
}