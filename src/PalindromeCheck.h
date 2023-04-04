#ifndef PALINDROMECHECK_H
#define PALINDROMECHECK_H
#pragma once

#include <string>
class PalindromeCheck
{
public:
    PalindromeCheck(std::string input);
    ~PalindromeCheck();

    bool isPalindrome() const ;

private:
    std::string str;
};

#endif