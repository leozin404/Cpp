#include <iostream>

using namespace std;

int main(void) {
	float pi = 3.14159265359;
	float x,y;
    float x2,pi2,eq,_eq;
    
	cout << "Enter value for x: ";
	cin >> x;

    x2 = x*x;
    pi2 = pi*pi;
    eq = (x2 + 0.5);
    _eq = (x2 - 0.5);
    y = ( ( x2 / ( pi2 * eq ))  * ( 1 + (x2 / (pi2 * _eq * _eq) ) ) );
    
	cout << "y = " << y;
	return 0;
}
