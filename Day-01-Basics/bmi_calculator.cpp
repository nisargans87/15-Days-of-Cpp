//Calculates a person's BMI given their weight in kilograms and height in meters.
#include<iostream>
using namespace std;
int main(){
    float height,weight,bmi;
    cout<<"Enter your weight: "<<endl;
    cin>>weight;
    cout<<"Enter your height: "<<endl;
    cin>>height;
    bmi = weight/(height* height);
    cout<<"The Body Index Mass is: "<<bmi;
    return 0;
}