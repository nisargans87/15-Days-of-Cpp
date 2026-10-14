// Seconds to Hours, Minutes, and Seconds Converter
#include<iostream>
using namespace std;
int main(){
    long sec,hrs,min;
    cout<<"Enter number of seconds: "<<endl;
    cin>>sec;
    hrs=sec / 3600;
    cout<<sec<<" in Hours "<< hrs<<endl;
    min=(sec % 3600) / 60;
    cout<<sec<<" in Minutes "<<min<<endl;
    return 0;
}
/* Output
Enter number of seconds: 
120
120 in Hours 0
120 in Minutes 2
*/