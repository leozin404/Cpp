#include <iostream>

using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	

	if (grossprice <= 0)
	    cout << "Error! grossprice cannot be lower or equal to 0!" << endl;
	else if (taxrate < 0 || taxrate > 100)
	    cout << "Error! taxrate out of the range 0-100!" << endl;
	else {
		  netprice = grossprice / (1+(taxrate/100));
	    taxvalue = grossprice - netprice;
    	cout << "Net price: " << netprice << endl;
    	cout << "Tax value: " << taxvalue << endl;
	}
	return 0;
}
