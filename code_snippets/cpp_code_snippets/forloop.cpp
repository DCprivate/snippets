#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    s.reserve(5);

    s.push_back('h');
    s.push_back('e');
    s.push_back('l');
    s.push_back('l');
    s.push_back('o');

    for (auto iter = s.rbegin(); iter != s.rend(); ++iter)
        cout << *iter << endl;

    for (auto iter = s.end()-1; iter >= s.begin(); --iter)
        cout << *iter << endl;
}

/* Output:
o
l
l
e
h
o
l
l
e
h
*/
