#include "PalindromeCheck.h"

PalindromeCheck::PalindromeCheck(std::string input) : str(input)
{

}

PalindromeCheck::~PalindromeCheck()
{

}

bool PalindromeCheck::isPalindrome() const 
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}