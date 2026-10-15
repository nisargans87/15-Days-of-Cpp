/* Determine the type of triangle
Question: Read three positive side lengths. First determine whether they form a valid triangle, then classify it as:
- Equilateral: all three sides equal
- Isosceles: exactly two sides equal, or at least two equal under the usual definition
- Scalene: all sides different
*/

#include<iostream>
using namespace std;
int main(){
    float side1,side2,side3,sum;
    cout<<"Enter lengths of the Traingle:"<<endl;
    cin>>side1>>side2>>side3;
    if((side1 < 0) || (side2 <0 ) || (side3 < 0)){
        cout<<"Negative Lengths!"<<endl;
    }else{
        sum = side1 + side2;
    }if(sum > side3){
        cout<<"Triangle is Valid!"<<endl;
        if((side1==side2) && (side2==side3) && (side3==side1)){
            cout<<"It is a Equilateral Traingle"<<endl;
        }else if((side1 =! side2) && (side2 =! side3) && (side3 =! side1)){
            cout<<"It is a Scalene Traingle"<<endl;
        }else{
            cout<<"It is a Isosceles Traingle"<<endl;
        }
    }
return 0;
}
  
/* 
Output

Enter lengths of the Traingle:
5 5 8
Triangle is Valid!
It is a Isosceles Traingle

Enter lengths of the Traingle:
4 4 4
Triangle is Valid!
It is a Equilateral Traingle

Enter lengths of the Traingle:
8 8.0 9
Triangle is Valid!
It is a Isosceles Traingle

Enter lengths of the Traingle:
-2 8 9
Negative Lengths!


*/