#include <iostream>
#include <string>

#include <vector>
#include <unordered_map>

using namespace std;

/// @brief Brute force sliding window solution 
/// O(n*m)
/// @return Index of first poisition found within superstring if found else -1 if substring not found
int str_str(string haystack, string needle) {

    int needle_len = needle.length();
    int haystack_len = haystack.length();

    for (int i = 0; i <= haystack_len - needle_len; i++) {
        int j = 0;
        while (j < needle_len) {
            if (haystack[i+j] != needle[j]) {
                break;
            }
            j++;
        }

        if (j == needle_len)
            return i;
        
    }
    return -1;
}

vector<int> build_lsp(const string& pattern) {
    
}

/// @brief KMP improves brute-force by avoiding unnecessary re-checks of characters.
/// It does this by preprocessing the pattern to build a Longest Prefix Suffix (LPS) table.
/// O(n+m)
/// @return Index of first poisition found within superstring if found else -1 if substring not found
int kmp_search(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();

    // exit early if conditions
    if (m == 0) return 0;
    if (m > n) return -1;

}

/// @brief Instead of checking from left to right, Boyer-Moore compares the pattern from right to left.
/// If a mismatch is found, it shifts the pattern right by skipping as many characters as it can, 
/// based on the mismatched character.
/// O(n)
/// @return Index of first poisition found within superstring if found else -1 if substring not found
int boyer_moore_search(const string& stack, const string& needle) {

}

int main() {
    int result = str_str("happenstance", "stance");
    cout << "Result: " << result << endl;
}