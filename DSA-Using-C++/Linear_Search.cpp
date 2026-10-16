/*
1. Task
Design, implement, and analyze the Sequential (Linear) Search method in C++ to find the position of a specific target element in an unordered array.

2. Program Question
Write a C++ program that reads the size of an array $n$, accepts $n$ integer elements from the user, reads a search element (ele), and scans the array sequentially to find whether the element exists, displaying its index position or a failure message.  

3. Different Ways of Implementation (Exploration)
Linear search can be implemented in several ways depending on architectural needs:
Iterative Approach with break (Lab Manual Standard): Scans the array using a standard for loop and terminates immediately upon finding a match using break.
Modular Function Approach: Encapsulates the search logic inside a separate function linearSearch(int arr[], int n, int ele) returning the matched index or -1.
Pointer Arithmetic Approach: Replaces standard array index subscripting (arr[i]) with pointer traversal (*(arr + i)).

*/

#include<iostream>
using namespace std;

int main(){
    int n, pos= -1, ele;
    cout<<"Enter size of an Array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the "<< n <<" Elements: "<<endl;
    for(int i = 0; i<n; i++ ){ //what if i<=n
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: "<<endl;
    cin>>ele;
    for(int i =0 ; i < n; i++){
        if(arr[i] == ele){
        pos = i;
        break;
        }
    }if(pos>=0){
            cout<<"The element "<<ele<<" found at "<<pos<<endl;
        }else{
            cout<<"The element "<<ele<< " not found "<<endl;
        }
    return 0;
}

/*
Output 

Enter size of an Array: 
4
Enter the 4 Elements: 
1 2 3 4
Enter the element to be searched: 
3
The element 3 found at 2

Enter size of an Array: 
4
Enter the 4 Elements: 
1 2 3 4
Enter the element to be searched: 
5
The element 5 not found 

*/


