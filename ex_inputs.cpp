#include <iostream>
using namespace std;

int main (void){

    int pt1, pt2, pt3, pt4;
    cout << "Digite os 3 primeiros digitos [de 0 a 255]: ";
    cin >> pt1;
    cout << "Digite os 3 próximos digitos [de 0 a 255]: ";
    cin >> pt2;
    cout << "Digite os 3 próximos digitos [de 0 a 255]: ";
    cin >> pt3;
    cout << "Digite os 3 últimos digitos [de 0 a 255]: ";
    cin >> pt4;

    if( pt1>=256 || pt2>=256 || pt3>=256 || pt4>=256 ) {

        cout << "Número de IP inválido! Digite um valor de 0 a 255";
        return 0;

    }

    cout << "O número de IP é: " << pt1 << "." << pt2 << "." << pt3 << "." << pt4;
    return 0;
}