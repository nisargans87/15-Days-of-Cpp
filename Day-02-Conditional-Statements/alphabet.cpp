/* Check whether a character is a vowel, consonant, digit, or special character.
*/


#include<iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: " << endl;
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == 'A' ||
            ch == 'E' || ch == 'I' || ch == 'O' ||
            ch == 'U') {
            cout << ch << " is a Vowel" << endl;
        }
        else {
            cout << ch << " is a Consonant" << endl;
        }
    }
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Digit" << endl;
    }
    else {
        cout << ch << " is a Special Character" << endl;
    }

    return 0;
}

/*
Output 

Enter a character: 
e
e is a Vowel

Enter a character: 
6
6 is a Digit

Enter a character: 
-
- is a Special Character

Enter a character: 
nisarga
n is a Consonant

Enter a character: 
base
b is a Consonant

Enter a character: 
🎉
� is a Special Character

*/
