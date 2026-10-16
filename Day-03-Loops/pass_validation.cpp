/* Task: Write a program using a do-while loop that keeps asking the user for a preset password (1234) until they enter it correctly.*/

#include<iostream>
using namespace std;

int main(){
    int pass;
    const int passEnter= 1234;
    do{
        cout<<"Enter a Password: "<<endl;
        cin>>pass;
        if(pass != passEnter){
        cout<<"Incorrect password. Try again.\n";
        }
     }while(pass != passEnter);
            cout<<"Password is Correct!, Redirecting.."<<endl;
    return 0;
}

/*
Output

Enter a Password: 
1234
Password is Correct!, Redirecting..

Enter a Password: 
4562
Incorrect password. Try again.
Enter a Password: 
5679
Incorrect password. Try again.
Enter a Password: 
2345
Incorrect password. Try again.
Enter a Password: 
0001
Incorrect password. Try again.
Enter a Password: 
1234
Password is Correct!, Redirecting..
*/




