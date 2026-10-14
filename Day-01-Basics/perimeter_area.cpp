/* Area and perimeter
Read the length and breadth of a rectangle; print its area and perimeter.*/

#include<iostream>
using namespace std;
float l,b;
float perimeter, area;
int main(){
    cout<<"Enter length:"<<endl;
    cin>>l;
    cout<<"Enter Breadth:"<<endl;
    cin>>b;
    perimeter = 2*(l+b);
    area=l*b;
    cout<<"Perimeter of the Rectangle is:"<<perimeter<<endl;
    cout<<"Area of the Rectangle is:"<<area<<endl;
    return 0;
}
