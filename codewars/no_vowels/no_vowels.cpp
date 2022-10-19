#include <iostream>
#include <string>

using namespace std;


string disemvowel(string s)
{
    string vowel = "aeiouAEIOU";
    for (int i = 0; i <= s.length(); i++)
    {        
        if (s.find(vowel[i]) != std::string::npos)
        {
            s.erase(s.begin() + i+1);
        }
        cout << s << endl;
    }
    return s;
}

int main()
{
    string s = "This website is for losers LOL!";
    cout << disemvowel(s) << endl;
}

/*
# include <string>
std::string disemvowel(std::string str)
{
    std::string newStr;
    for(int i = 0; i < str.size(); ++i)
    {
        switch(tolower(str[i]))
        {
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
            continue;
        }
        newStr += str[i];
    }
    return newStr;
}

# include <string>
# include <regex>

std::string disemvowel(std::string str)
{
    return std::regex_replace(str,static_cast<std::regex>("([AaEeIiOoUu])"),"");
}

# include <string>
std::string disemvowel(std::string str)
{
  std::string vowels = "AEIOUaeiou", result = "";

  for (auto& ch : str)
    if (vowels.find(ch) == std::string::npos)
      result += ch;

  return result;
}

# include <string>

std::string disemvowel(std::string str)
{
    for ( auto letter : "AEIOUaeiou" ) {
      str.erase(std::remove(str.begin(), str.end(), letter), str.end());
    }
    
    return str;
}

# include <string>
# include <regex>
std::string disemvowel(std::string str)
{
  std::regex vowels("[aeiouAEIOU]");
  return std::regex_replace(str, vowels, "");
}
*/