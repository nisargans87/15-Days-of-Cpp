/* Write a C++ program that acts as a 
simple menu-driven calculator using a switch statement for operations (+, -, *, /). Also, display whether the resulting answer is even or odd.*/

#include<iostream>
using namespace std;
int main(){
    char op;
    double num1,num2, check;
    int result;
    cout<<"Enter Operator(+, -, *, /):"<<endl;
    cin>>op;
    cout<<"Enter a two Numbers: "<<endl;
    cin>>num1>>num2;
    bool validOperation = true;
    switch(op){
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        if(num2==0){
            cout<<"Error:Division by zero!"<<endl;
            validOperation = false;
        }
        break;
        default:
        cout<<"Error: Invalid Operator!"<<endl;
        validOperation = false;
        break;
    }
    if(validOperation){
        cout<<"Result: "<<result<<endl;
        if(result % 2 == 0){
            cout<<result<<" is a Even"<<endl;
        }else{
            cout<<result<<" is a Odd"<<endl;
        }
    }
return 0;
}


/* Output - 01

Enter Operator(+, -, *, /):
/   
Enter a two Numbers: 
3 10
Result: 32767
32767 is a Odd

Enter Operator(+, -, *, /):
*  
Enter a two Numbers: 
2 5
Result: 10
10 is a Even
*/

