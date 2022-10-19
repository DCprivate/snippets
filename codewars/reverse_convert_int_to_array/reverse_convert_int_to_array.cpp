#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> digitise(long int n) 
{   
    vector<int> v;
    string s = to_string(n); 
    reverse(s.begin(), s.end());

    for (int i = 0; i <= s.length(); i++) {
        v.push_back(s[i]);
    }
    
    return v;
}

int main()
{
    unsigned long n = 123456789;

    for (auto i: digitise(n)) {
        cout << i << endl;
    }       
}

