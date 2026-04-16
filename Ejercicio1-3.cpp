#include <iostream>
using namespace std;

int main (){
    int a, b;

    cout << "CALCULADORA de operaciones basicas" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    int suma = a + b;
    int resta = a - b;
    int producto = a * b;
    int division = a / b;
    int residuo = a % b;

    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << producto << endl;
    cout << "Division: " << division << endl;
    cout << "Residuo de la division: " << residuo << endl;

    return 0;

}