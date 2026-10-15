/* Display the day of the week
Read a number from 1 to 7 and display the corresponding day, where 1 is Monday and 7 is Sunday.
*/

#include<iostream>
using namespace std;
int main(){
    string num;
    int day;
    cout<<"Enter a number to find Day: "<<endl;
    cin>>day;
    switch(day){
    case 1:
    cout<<"It's Monday "<<endl;
    break;
    case 2:
    cout<<"It's Tuesday "<<endl;
    break;
    case 3:
    cout<<"It's Wednesday "<<endl;
    break;
    case 4:
    cout<<"It's Thursday "<<endl;
    break;
    case 5:
    cout<<"It's Friday"<<endl;
    break;
    case 6:
    cout<<"It's Saturday"<<endl;
    break;
    case 7:
    cout<<"It's Sunday "<<endl;
    break;
    default:
    cout<<"Only 7 Days!!!"<<endl;
    }
    return 0;
}

/*
Output 

Enter a number to find Day: 
1
It's Monday

Enter a number to find Day: 
7
It's Sunday 

Enter a number to find Day: 
9
Only 7 Days!!!
*/