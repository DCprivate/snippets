#include <iostream>
#include <string>
using namespace std;

/// @brief 
/// @param haystack 
/// @param needle 
/// @return 
bool str_str(string haystack, string needle) {

    int str_len = needle.length();
    char first_char = needle[0];

    for (int i = 0; i < haystack.length(); i++) {
        cout << haystack[i] << endl;
        if (haystack[i] == first_char) {
            cout << "here " << haystack[i] << " " << first_char << " " << needle << endl;
            cout << "here: " << haystack.compare(i+1, str_len, needle) << endl;
        }
    }
}

int main() {
    bool result = str_str("happenstance", "sta");
    cout << "Result: " << result << endl;
}