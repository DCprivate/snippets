#include <string>
#include <iostream>

using namespace std;

int count_vowels(const string& s) {
    int vowel_count = 0;
    string vowels = "aeiou";

    for (int i = 0; i < sizeof(s); i++) {
        if (vowels.find(s[i]) != std::string::npos)
            vowel_count++;
    }
    return vowel_count;
}

int main() {
    cout << count_vowels("abr ezzzacaqqqQda bra") << endl;
}

/*
int getCount(const std::string& str){
  std::string vowels = "aeiou";
  
  return std::count_if(str.begin(), str.end(), [&vowels](char c) -> bool{
    return vowels.find(std::tolower(c)) != std::string::npos;
  });
}
*/