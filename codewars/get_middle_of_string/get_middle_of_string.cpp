#include <iostream>
#include <string>
using namespace std;

string get_middle(string s) {
    if (s.length() % 2 == 0) // even
        return s.substr(s.length()/2-1, 2);
    else
        return s.substr(s.length()/2, 1);

    return "failure";
}

int main() {
    cout << get_middle("temp") << endl;
}