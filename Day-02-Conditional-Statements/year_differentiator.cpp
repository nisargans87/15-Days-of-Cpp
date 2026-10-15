
#include<iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: " << endl;
    cin >> year;

    if (year % 100 == 0) {
        cout << year << " is a Century Year" << endl;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year" << endl;
    } else {
        cout << year << " is not a Leap Year" << endl;
    }
    return 0;
}

/*
Output

Enter a year: 
2000
2000 is a Century Year
2000 is a Leap Year

Enter a year: 
1900
1900 is a Century Year
1900 is not a Leap Year

Enter a year: 
2021
2021 is not a Leap Year

*/
