/* Compound Arithmetic & Average Calculator
Accepts marks for 
three subjects, computes the total sum, and finds the average percentage. */

#include<iostream>
using namespace std;
int main(){
    int marks1,marks2,marks3,totalMarks,average,avgpercent;
    cout<<"Enter marks for subject 1:"<<endl;
    cin>>marks1;
    cout<<"Enter marks for subject 2:"<<endl;
    cin>>marks2;
    cout<<"Enter marks for subject 3:"<<endl;
    cin>>marks3;
    totalMarks = marks1 + marks2 + marks3;
    cout<<"Total Marks: "<<totalMarks<<endl;
    average=totalMarks / 3.0; 
    cout<<"Average: "<<average<<endl; 
    return 0;
}

*/ Output - 1
Enter marks for subject 1:
85
Enter marks for subject 2:
97
Enter marks for subject 3:
75
Total Marks: 257
Average: 85
*/