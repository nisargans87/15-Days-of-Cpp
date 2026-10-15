/* Check whether a triangle is valid
Given three side lengths, 
determine whether they can form a triangle.
Each side must be positive, and the sum of any two sides must be greater than the third. */

#include<iostream>
using namespace std;
int main(){
    float side1,side2,side3,sum;
    cout<< "Enter the three sides length of the Traingle: "<<endl;
    cin>>side1>>side2>>side3;
    if((side1)> 0 || (side2) || 0 || (side3) > 0){
        cout<<"Lengths can't be Negative!"<<endl;
    }
    else{
        sum=side1+side2;
        if(sum>=side3){
            cout<<"Valid Traingle!"<<endl;
        }else{
            cout<<"Invalid Traingle!"<<endl;
        }
        }          
return 0;
}

/*
Enter the three sides length of the Traingle: 
2 3 7
Invalid Traingle!

Enter the three sides length of the Traingle: 
4 5 6
Valid Traingle!

Enter the three sides length of the Traingle: 
12.5 23.6 34.9
Valid Traingle!

Enter the three sides length of the Traingle: 
-7 8 9
Lengths can't be Negative!

*/