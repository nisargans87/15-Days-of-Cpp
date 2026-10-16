// Task: Write a program to compute the factorial of a number (e.g., $5! = 5 \times 4 \times 3 \times 2 \times 1$) using a while loop.

#include <iostream>
using namespace std;

int main() {
    int n;
    int result = 1;
    int fact = 1;

    cout << "Enter a number to find factorial: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative integers." << endl;
        return 0;
    }

    while (fact <= n) {
        result = result * fact;
        fact++;
    }

    cout << "Factorial: " << result << endl;

    return 0;
}

/* 

Output 
Enter a number to find factorial: 4
Factorial: 24

Enter a number to find factorial: -9
Factorial is not defined for negative integers.

Enter a number to find factorial: 6
Factorial: 720

*/
