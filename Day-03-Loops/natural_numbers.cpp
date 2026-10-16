/* Task: Write a program to calculate the sum of the first $N$ natural numbers (e.g., $N = 5$) using a while loop.*/

#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int i =1;
    int n;
    cout<<" Enter a Number to Find First of Sum N Natural Numbers: "<<endl;
    cin>> n;
    while(i<= n){
        sum +=i;
        i++;
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}

/*
Enter a Number to Find First of Sum N Natural Numbers: 
2
Sum: 3

Enter a Number to Find First of Sum N Natural Numbers: 
10
Sum: 55

Enter a Number to Find First of Sum N Natural Numbers: 
0
Sum: 0

Concept Learned: Using a while loop for condition-controlled repetition and accumulating values (running total).

*/