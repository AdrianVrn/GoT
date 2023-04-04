#include "PalindromeCheck.h"
#include <cctype>

PalindromeCheck::PalindromeCheck(const std::string& input) : str(input)
{
    // Verifica daca toate caracterele din sir sunt litere mici din alfabetul latin
    if (!isValidInput(input)) 
    {
        std::cout << "Sunt permise doar caractere mici din alfabetul latin!\n";  
    }

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

bool PalindromeCheck::isValidInput(const std::string& input) const 
{
    for (char litere : input) 
    {
        if (!islower(litere)) 
        {
            return false;
        }
    }
    return true;
}