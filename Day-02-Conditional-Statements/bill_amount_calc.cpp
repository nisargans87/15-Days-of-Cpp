/* Electricity bill calculator
Calculate an electricity bill based on units consumed using these sample slab rates:
Units	Rate per unit
First 100	₹1.50
Next 100	₹2.50
Next 300	₹4.00
Above 500	₹6.00
These are practice rates, not actual utility tariffs.
*/


#include <iostream>
using namespace std;
int main() {
    int units;
    double bill;
    cout<<"Enter units: "<<endl;
    cin >> units;
    if (units <= 0) {
        cout << "Invalid units" << endl;
    } else {
        if (units <= 100) {
            bill = units * 1.50;
        } else if (units <= 200) {
            bill = 100 * 1.50 + (units - 100) * 2.50;
        } else if (units <= 500) {
            bill = 100 * 1.50 + 100 * 2.50 + (units - 200) * 4.00;
        } else {
            bill = 100 * 1.50 + 100 * 2.50 + 300 * 4.00 + (units - 500) * 6.00;
        }
        cout << "Electricity bill: Rs. " << bill << endl;
    }
    return 0;
}

/*
Enter units: 
200
Electricity bill: Rs. 400

Enter units: 
400
Electricity bill: Rs. 1200

Enter units: 
0
Invalid units

*/

