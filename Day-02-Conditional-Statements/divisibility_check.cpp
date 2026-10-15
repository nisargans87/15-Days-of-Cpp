// Check whether a number is divisible by both 5 and 11.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: "<<endl;
    cin>>num;
    if(num % 5 == 0){
        cout<<num<<" is divisible by 5"<<endl;
    }else if(num % 11 == 0){
        cout<<num<<" is divisible by 11"<<endl;
    }else{
        cout<<num<<" is not divisible by neither 5 nor 11"<<endl;
    }
    return 0;
}