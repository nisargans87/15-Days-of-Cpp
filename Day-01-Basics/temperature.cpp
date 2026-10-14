#include<iostream>
using namespace std;
float C,F;
int main(){
    //Celsius Temperature
    cout<<"Enter Temperature in Celsius:"<<endl;
    cin>>C;
    F=(C*(9.0/5.0))+32;
    cout<<"Temperature in Fahrenheit: "<< F <<endl;
    // Fahrenheit Temperature
    cout<<"Enter Temperature in Fahrenheit:"<<endl;
    cin>>F;
    C=(F-32)*(5.0/9.0);
    cout<<"Temperature in Celsius: "<< C<<endl;
}

/* Output - 1
Enter Temperature in Celsius:
250
Temperature in Fahrenheit: 482
Enter Temperature in Fahrenheit:
482
Temperature in Celsius: 250 

Output - 2
Enter Temperature in Celsius:
0
Temperature in Fahrenheit: 32
Enter Temperature in Fahrenheit:
8
Temperature in Celsius: -13.3333
*/