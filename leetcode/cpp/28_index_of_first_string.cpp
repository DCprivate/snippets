#include <iostream>
#include <string>
using namespace std;
 
int str_str(string haystack, string needle) {

    int needle_len = needle.length();
    int haystack_len = haystack.length();

    for (int i = 0; i < haystack_len - needle_len; i++) {

        for (int j = 0; j < needle_len; j++) {
            cout << haystack[i+j] << " " << needle[j] << endl;
            if (haystack[i+j] != needle[j]) {
                cout << "not found" << endl;
                break;
            }
            else {
                cout << "found" << endl;
            }
            cout << i << " " << j << endl;
        }
        
    }
}

int main() {
    bool result = str_str("happenstance", "sta");
    cout << "Result: " << result << endl;
}