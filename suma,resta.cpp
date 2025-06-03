#include <iostream>

using namespace std;

int main() {
int opcion;
float num1, num2, resultado;

while (true){
    cout << "seleccione una operacion:" << endl;
    cout << "1. suma" << endl;
    cout << "2. resta" << endl;
    cout << "3. multiplicación" << endl;
    cout << "4. división" << endl;
    cout << "ingrese su opcion (1\2\3\4): ";
    cin >> opcion;

    if (opcion >= 1 && opcion <= 4) {
        cout << "ingrese el primer número: ";
        cin >> num1;
        cout << "ingrese el segundo número: ";
        cin >> num2; 

        
}
return 0;
}