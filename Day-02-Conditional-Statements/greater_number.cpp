/* Question: Read three integers and print the greater number. 
If they are equal, print Both numbers are equal. */

#include<iostream>
using namespace std;
int main(){
    double num1, num2, num3;
    cout<<"Enter three Integers: "<<endl;
    cin>>num1>>num2>>num3;
    if((num1 > num2) || (num1 > num3)){
        cout<<num1<<" is Greater"<<endl;
        if((num1==num2) || (num1==num3)){
            cout<<"Two Integers are equal and greater!"<<endl;
        }
    }else if(num2 > num3){
        cout<<num2<<" is Greater"<<endl;
    }else{
        cout<<num3<<" is Greater"<<endl;
    }
    return 0;
}

/*
Enter three Integers: 
-9 -3 0.98             
0.98 is Greater

Enter three Integers: 
29 30 21
30 is Greater

Enter three Integers: 
25 25 35
35 is Greater

Enter three Integers: 
25 24 25
25 is Greater
Two Integers are equal and greater!

Enter three Integers: 
35 35 35
35 is Greater

Enter three Integers: 
-2 -4 -2
-2 is Greater
Two Integers are equal and greater!

*/