/* Login validation 
Read a user ID and a PIN. The expected user ID is 1234 and the expected PIN is 5678. 
Print success only if both match. */

#include<iostream>
using namespace std;
int main(){
    string pass,passset;
    string id,idset;
    cout<<"Hello! User"<<endl;
    cout<<"Enter your password: "<<endl;
    cin>>pass;
    cout<<"Password is Stored!"<<endl;
    cout<<"Enter your Id:"<<endl;
    cin>>id;

    cout<<"Enter your set password:"<<endl;
    cin>>passset;
    cout<<"Enter your unique Id:"<<endl;
    cin>>idset;

    if((pass==passset) && (id==idset)){
        cout<<"Login Sucessfull!, Dear"<<" "<<id<<endl;
    }
    else{
        cout<<"Login Deneid"<<endl;
    }
    return 0;
}

/*
Output

Run - 01

Hello! User
Enter your password: 
1234$%
Password is Stored!
Enter your Id:
12340o
Enter your set password:
1234$%-
Enter your unique Id:
1234o0
Login Deneid

Run -02

Hello! User
Enter your password: 
1234N.
Password is Stored!
Enter your Id:
U01BP24S0087
Enter your set password:
1234N.
Enter your unique Id:
U01BP24S0087
Login Sucessfull!, Dear U01BP24S0087
*/