#include <iostream>

using namespace std;

int main(void) {
	int   sys;
	float m, ft, in;
	cout << "Select your input measurement system. Type '0' for metric and '1' for imperial: " << endl;
	cin >> sys;
	if (sys == 0){
	    cin >> m;
	    in = m / 0.0254;
	    int ft = in/12;
	    in -= (ft*12);
	    cout << ft << "'" << in << '"' << endl;
	}
	
	else if (sys == 1){
	    cin >> ft;
	    cin >> in;
	    in += (ft*12);
	    m = in * 0.0254;
	    cout << m << "m" << endl;
	}
	
	else
	    cout << "Invalid operation! Type '0' for metric and '1' for imperial."; 
	return 0;
}
