#include<iostream>
using namespace std;
int main(){
  int arr[5] = { 10, 20, 30 ,40};
  for(int i=0; i<=5; i++){
    cout<<"Index:"<<i<<endl;
    cout<<"Element:"<<arr[i]<<endl;
    cout<<"Memory Address:"<<&arr[i]<<endl;
    cout<<endl;
  }
  return 0;
}

/** Output
Index:0
Element:10
Memory Address:0x7ffec7929240

Index:1
Element:20
Memory Address:0x7ffec7929244

Index:2
Element:30
Memory Address:0x7ffec7929248

Index:3
Element:40
Memory Address:0x7ffec792924c

Index:4
Element:0
Memory Address:0x7ffec7929250

Index:5
Element:0
Memory Address:0x7ffec7929254
  **/

