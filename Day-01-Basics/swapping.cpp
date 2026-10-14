/* Task - Swap two numbers
Read two integers and swap their values
Concepts: temporary variable, assignment */
#include<iostream>
using namespace std;
int a,b,temp;
int main(){
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    cout<< "Before Swapping"<<endl;
    cout<<"a value is " << a << endl;
    cout<<"b value is " << b<< endl;
    temp = a;
    a = b;
    b = temp;
    cout<< "After Swapping"<<endl;
    cout<<"a value is " << a <<endl;
    cout<<"b value is " << b<<endl;
    return 0;
}

