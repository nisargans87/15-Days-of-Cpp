// Print the absolute value of an integer using if-else.
/*  The absolute value of an integer is its distance from zero on the number line. It is always zero or positive, never negative.
We write absolute value using two vertical bars: (|x|).
Task - If the number is negative, change it to positive.
If the number is positive or zero, keep it unchanged.
*/

#include<iostream>
using namespace std;
int main(){
    int abs;
    cout<<"Enter an absolute value: "<<endl;
    cin>>abs;
    if(abs<0){
        cout<<"Absolute Value: "<<-abs<<endl;
    }else{
        cout<<"Absolute value: " <<abs << endl;
    }
    return 0;
}

/*
Output -

Enter an absolute value: 
-6
Absolute Value: 6

Enter an absolute value: 
87
Absolute value: 87

Enter an absolute value: 
0
Absolute value: 0

*/
