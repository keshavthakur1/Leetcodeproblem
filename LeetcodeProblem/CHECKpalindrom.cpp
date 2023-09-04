#include<iostream>
using namespace std;

int main() {
    int n;
    
    // Prompt the user to enter an integer
    cout << "Enter an integer: ";
    cin >> n;

    int revNum = 0;
    int dup =n;

    while (n > 0) {
        int digit = n % 10;
        revNum = (revNum * 10) + digit;
        n = n / 10;
    }
    
    if (dup == revNum) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    // Print the reversed number
    //cout << "check palindrom number: " << palindrom << endl;

    return 0;
}
