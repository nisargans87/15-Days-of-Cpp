
/* Create a simple ATM simulation
 with balance, withdrawal, and deposit choices. */

#include <iostream>
using namespace std;

int main() {
    long withdrawn, deposited;
    double setAmount = 500.00;
    char option;

    cout << "Hello Programmer! Welcome to C++ Bank!" << endl;
    cout << "Choose an action:" << endl;
    cout << "b - Check Balance" << endl;
    cout << "w - Withdraw" << endl;
    cout << "d - Deposit" << endl;

    cin >> option;

    switch (option) {
        case 'b':
            cout << "Checking Balance...." << endl;
            cout << "Current Balance is: $"
                 << setAmount << endl;
            break;

        case 'w':
            cout << "Enter Amount to be Withdrawn: " << endl;
            cin >> withdrawn;

            if (withdrawn <= 0) {
                cout << "Invalid withdrawal amount!" << endl;
            } else if (withdrawn > setAmount) {
                cout << "Insufficient Balance!!" << endl;
            } else {
                setAmount = setAmount - withdrawn;
                cout << "Withdrawing Amount..." << endl;
                cout << "Withdrawn Amount is: $"
                     << withdrawn << endl;
                cout << "Remaining Balance is: $"
                     << setAmount << endl;
            }
            break;

        case 'd':
            cout << "Enter Amount to be Deposited: " << endl;
            cin >> deposited;

            if (deposited <= 0) {
                cout << "Invalid deposit amount!" << endl;
            } else {
                setAmount = setAmount + deposited;
                cout << "Depositing Amount...." << endl;
                cout << "Deposited Amount is: $"
                     << deposited << endl;
                cout << "Updated Balance is: $"
                     << setAmount << endl;
            }
            break;

        default:
            cout << "Sorry! Invalid Option!" << endl;
    }

    return 0;
}
