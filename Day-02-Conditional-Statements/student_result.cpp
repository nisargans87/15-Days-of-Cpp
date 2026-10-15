/* Write a C++ program to assign a letter grade based on a student's percentage (0–100):
90 or above: A

80 to 89: B

70 to 79: C

60 to 69: D

Below 60: F

Additionally, if the student gets an A, check using a nested if whether their score is 95 or above to award a "Distinction" badge. */

#include<iostream>
using namespace std;
int marks;
int main(){
    cout<<"Enter yours Marks: "<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"A "<<endl;;
        if(marks>=95){
            cout<<"Congratulations! Distiction Badge is Earned!";
        } 
    }else if(marks>=80){
        cout<<"B "<<endl;
    }else if(marks>=70){
        cout<<"C "<<endl;
    }else if(marks>=60){
        cout<<"D "<<endl;
    }else{
        cout<<"Grade(F)"<<endl;
    }
    return 0;
}