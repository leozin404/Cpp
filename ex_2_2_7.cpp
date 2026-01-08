#include <iostream>
using namespace std;

int main(void){
    
    int n, c0, steps = 0;
    
    do {
        cout << "Digite o número desejado: ";
        cin >> n;
        if (n > 0) {
            break;
        }
    } while (n <= 0);
        
    c0 = n;
    
    while (c0 != 1) {
        if (c0 % 2 == 0){
            c0 /= 2;
            cout << c0 << endl;
        }
        else {
            c0 = 3*c0 + 1;
            cout << c0 << endl;
            steps++;
            if (c0 != 1)
                continue;
        }
        
        steps++;
    }
    
    cout << "steps: " << steps << endl;
    
}
