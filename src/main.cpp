#include <iostream>
#include <string>
#include "PalindromeCheck.h"

using namespace std;

int main() {
    string input;
    cout << "Introdu sirul de carctere pentru a verfica daca este un Palindrom.\n";
    cin >> input;
    PalindromeCheck check(input);
    if (check.isPalindrome())
    {
        cout << "DA\n";
    } 
    else if( check.isValidInput(input))
    {
        cout << "NU\n";
    }

    return 0;
}
