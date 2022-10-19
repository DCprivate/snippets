#include <string>
#include <algorithm>
#include <iostream>

using namespace std; 

string reverseString(string str)
{
  reverse(str.begin(), str.end());
  return str;
}

string reverse_string(string s)
{
    string temp = "";

    for(int i = s.length()-1; i >= 0; i--) { //[0, 9]
        temp += + s[i];
    }
    return temp;
}

int main()
{
    string s = "reverse me";
    cout << reverseString(s) << endl;
    cout << reverse_string(s) << endl;
}
