#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5 ; i++){
        cin>>arr[i];
    }
    cout<< "\nThe Array Elements are: ";
    for(int i=0; i<5 ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n First Element:"<<arr[0];
    cout<<"\nLast Eleemnt: "<<arr[4];
    cout<<"\nArray size: "<<sizeof(arr)/sizeof(arr[0])<<endl;
    return 0;
}