/* Write a C++ program to determine if a given year is a leap year.
A year is a leap year if:

It is divisible by 4, and

It is not divisible by 100, unless it is also divisible by 400.

Combine multiple logical operators (&&, ||) inside your conditional statements cleanly.*/

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year:"<<endl;
    cin>>year;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout<<year<<" "<<" is a Leap Year"<<endl;
    }else{
        cout<<year << " is not a Leap Year." << endl;
    }
    return 0;
}

/*
Output - 01
Enter a year:
2024
2024  is a Leap Year

Enter a year:
2013
2013 is not a Leap Year.
*/