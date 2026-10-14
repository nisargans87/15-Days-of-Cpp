/* Calculates the simple interest and total amount
 based on user input for principal, rate, and time. */

 #include<iostream>
 using namespace std;
 int main(){
    float principal,rate,time,interest,totalAmount;
    cout<<"Enter principle:";
    cin>>principal;
    cout<<"Enter rate:";
    cin>>rate;
    cout<<"Enter Time:";
    cin>>time;
    interest=(principal * rate * time)/100.0;
    totalAmount=principal+interest;
    cout<<"Simple Interest: "<< interest << endl;
    cout<<"Total Amount: " << totalAmount <<endl;
    return 0;
 }