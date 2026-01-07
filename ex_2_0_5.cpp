#include <iostream>

using namespace std;

int main(void){

    int year, month, day, weekday;

    cout << "Type an year between 1901 and 2100: ";
    cin >> year;
    cout << "Type a month number: ";
    cin >> month;
    cout << "Type a day number: ";
    cin >> day;
    
    if (year < 1901 || year > 2100 || month <= 0 || month > 12 || day <= 0 || day > 31 )
        cout << "Invalid number!" << endl;
    else {
        
        month -= 2;
        if (month <= 0){
            month += 12;
            year--;
        }
        month = (month*83)/32;
        month += day;
        month += year;
        month += (year/4);
        month -= (year/100);
        month += (year/400);
        weekday = month % 7;
        cout << "Your weekday is: " << weekday <<  endl;
        
    }
        
    return 0;
}
