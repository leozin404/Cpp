#include <iostream>
using namespace std;

int main (void){
    
    int n;
    long unsigned result;
    
    do {
        
        cout << "Digite um número ímpar para definir o quadrado: ";
        cin >> n;
        
    } while (n % 2 == 0);
    
    result = (n*n) - 2*n + 2;
    cout << result;
    
}
