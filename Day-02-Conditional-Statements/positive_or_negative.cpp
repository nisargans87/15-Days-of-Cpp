/* Write a C++ program that asks the user to enter an integer.
Check whether the number is positive, negative, or zero, and print the appropriate message. */

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if(num<0){
        cout<<num<<" is a negative number "<<endl;
    }else if(num==0){
        cout<<num<<" is a Zero "<<endl;
    }else{
        cout<<num<<" is a positive number "<<endl;
    }
    return 0;
}