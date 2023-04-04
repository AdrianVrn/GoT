#ifndef PALINDROMECHECK_H
#define PALINDROMECHECK_H
#pragma once
#include <iostream>
#include <string>
class PalindromeCheck
{
public:
    PalindromeCheck(const std::string& input);
    ~PalindromeCheck();

    bool isPalindrome() const ;
    bool isValidInput(const std::string& input) const;
private:
    std::string str;
    
};

#endif