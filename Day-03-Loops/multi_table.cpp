/* Multiplication Table Generator
Task: Write a program to print the multiplication table of a given number (e.g., 7) up to 10 using a for loop. */

#include<iostream>
using namespace std;
int main(){
    int m ,n;
    cout<<"Enter a number to generate a multiplication table: " <<endl;
    cin>>n;
    for(int i=1; i<=10; i++){
        m = n * i;
        cout<<n<<" * "<<i<<" = "<<m<<endl;
    }
    return 0;
}

/*
Output -
Enter a number to generate a multiplication table: 
2
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20

Concept Learned: Multi-step iterations and combining loop counters with arithmetic calculations.
*/