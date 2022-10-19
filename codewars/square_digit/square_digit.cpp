#include <string>
#include <iostream>

using namespace std;

int square_digits(int n)
{
    string temp = "";
    int digit = 0;

    while(n != 0) {
        digit = n % 10;
        temp.insert(0, to_string(digit*digit));
        n /= 10;
    }
    return stoi(temp);
}

int main()
{
    int n = 3212;
    int n2 = 13579;
    cout << square_digits(n) << endl;
    cout << square_digits(n2) << endl;
}