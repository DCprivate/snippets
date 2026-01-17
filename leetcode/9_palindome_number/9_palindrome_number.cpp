#include <iostream>
#include <string>
using namespace std;

/*
Given an integer x, return true if x is a palindrome, and false otherwise.
*/

// leaving as int
bool _isPalindrome(int x) {
    if (x < 0)
        return false;
    
    int digit = 0, reverse = 0, temp = x;
    while (temp > 0) {
        digit = temp % 10; // get each digit
        reverse = (reverse * 10) + digit; // accumulate each digit and multiply to maintain magnitude
        temp /= 10; // div 10 so we can get next digit
    }
    return (reverse == x);
}

// converting to string
bool isPalindrome(int x) {
    string temp = to_string(x);
    int size = temp.size();
    for (int i = 0; i < size; ++i) {
        if (temp[i] != temp[size-i-1])
            return false;
    }
    return true;
}

int main() {
    int x = 121;
    int x1 = -121;
    int x2 = 10;
    cout << _isPalindrome(x) << endl;
}





































































/*
    if (x < 0)
        return false;

    int digit = 0;
    long reverse = 0, temp = x;
    while (temp > 0) {
        
        int digit = temp % 10;
        reverse = (reverse * 10) + digit;
        temp /= 10;
    }
    return (reverse == x);*/