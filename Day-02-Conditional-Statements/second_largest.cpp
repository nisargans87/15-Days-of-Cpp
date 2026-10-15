
 // Find the second-largest of three distinct integers.

#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    int largest1, largest2, largest3;
    int greater;

    cout << "Enter a Numbers:" << endl;
    cin >> num1 >> num2 >> num3;

    largest1 = num1;
    largest2 = num2;
    largest3 = num3;

    if((num1 != num2) && (num1 != num3) && (num1 > num2) && (num1 > num3)){
        cout << num1 << " is the largest Number" << endl;
    }
    else if((num2 != num3) && (num2 > num3) && (num2 > num1)){
        cout << num2 << " is the largest Number" << endl;
    }
    else{
        cout << num3 << " is the largest Number" << endl;
    }

    cout << "Finding Second Largest Number.." << endl;

    if(largest1 > largest2){
        if(largest2 > largest3){
            cout << "Second Largest is: " << largest2 << endl;
        }
        else if(largest1 > largest3){
            cout << "Second Largest is: " << largest3 << endl;
        }
        else{
            cout << "Second Largest is: " << largest1 << endl;
        }
    }
    else{
        if(largest1 > largest3){
            cout << "Second Largest is: " << largest1 << endl;
        }
        else if(largest2 > largest3){
            cout << "Second Largest is: " << largest3 << endl;
        }
        else{
            cout << "Second Largest is: " << largest2 << endl;
        }
    }
    return 0;
}


/* SECOND APPROCH

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three distinct integers: ";
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a < b && a > c)) {
        cout << "Second largest is: " << a << endl;
    }
    else if ((b > a && b < c) || (b < a && b > c)) {
        cout << "Second largest is: " << b << endl;
    }
    else {
        cout << "Second largest is: " << c << endl;
    }

    return 0;
}
*/