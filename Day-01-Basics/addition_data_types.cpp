/* Add two numbers of different numerical data types
Read two numbers and print their sum.
Concepts: variables, arithmetic operators, input/output, data types. */

#include<iostream>
using namespace std;
//Integer Types
int a;  // Common Integer type
short b; //small integer value
//Floating point Types
float x;  // Single precision decimal value
double y;  // double precision
int integerSum;
long double floatSum;
int main(){
cout<<"Enter values for a and b"<<endl;
cin>>a>>b;
integerSum=a+b;
cout<<"Enter values for x and y"<<endl;
cin>>x>>y;
floatSum=x+y;
cout<<"Sum of"<<" "<<a<<" "<<"and"<<" "<<b<<" "<<"is"<<" "<<integerSum<<endl;
cout<<"Sum of"<<" "<<x<<" "<<"and"<<" "<<y<<" "<<"is"<<" "<<floatSum<<endl;
return 0;
}


