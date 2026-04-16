#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double radio, areaCirculo, areaCirculo2, areaCirculo3, lado, areaCuadrado;
    int base, altura, areaTriangulo;

    cout << "CALCULAR EL AREA DEL CIRCULO" << endl;
    cout << "Digite el valor numerico del radio " << endl;
    cin >> radio;

    areaCirculo = 3.1416 * radio * radio;
    areaCirculo2 = 3.1416 * pow(radio, 2);

    cout << "El area del circulo es: " << areaCirculo << endl;
    cout << "El area del circulo es: " << areaCirculo2 << endl;

    cout << "CALCULAR EL AREA DEL CUADRADO" << endl;
    cout << "Digite el valor numerico del lado " << endl;
    cin >> lado;
    areaCuadrado = pow(lado, 2);
    cout << "El area del cuadrado es: " << areaCuadrado << endl;

    cout << "CALCULAR EL AREA DEL TRIANGULO" << endl;
    cout << "Digite el valor numerico de la base " << endl;
    cin >> base;

    cout << "Digite el valor numerico de la altura " << endl;
    cin >> altura;

    areaTriangulo = (base * altura)/2;

    cout << "El area del triangulo es: " << areaTriangulo << endl;

    return 0;

}