#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

/*
Write a function to find the longest common prefix string 
amongst an array of strings.
If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/


// this works and the sorting thing is smart, but is fairly slow
string _longestCommonPrefix(vector<string>& v) {
    // sorting is the key because when comparing, every word (and more importantly
    // every letter) will be "in order"
    // checking first and last will not just check those 2, but everything in between
    sort(v.begin(), v.end());
    int n = v.size();
    string pref = "";
    string first = v[0];
    string last = v[n - 1];

    for (int i = 0; i < min(first.size(), last.size()); ++i) {
        if (first[i] != last[i]) {
            return pref;
        }
        pref += first[i];
    }
    return pref;
}

// not actually faster?
string longestCommonPrefix(vector<string>& strs) { 
    string ans = strs[0];
    for (auto it = strs.begin() + 1; it != strs.end(); ++it) { // iterate through all words except for first
        int loc = 0;
        string cur = *it;
        cout << cur << endl;
        for (; loc < min(ans.size(), cur.size()); ++loc) { // go for as long as shortest word
            if (ans[loc] != cur[loc]) { // if character in current word != first word
                break;
            }
        }
        ans = ans.substr(0, loc); // extract however many times you iterate over word to find a mismatch
    }
    return ans;
}


int main() {
    vector<string> strs = {"flower","flow","flight"};
    vector<string> strs1 = {"dog","racecar","car"};
    vector<string> empty_strs;

    cout << longestCommonPrefix(strs) << endl;
    cout << longestCommonPrefix(strs1) << endl;
    cout << longestCommonPrefix(empty_strs) << endl;
}