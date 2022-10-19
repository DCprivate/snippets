#include <iostream>
#include <string>

using namespace std;

string fakeBin(string str)
{
    for (auto &s : str)
    {
        s = s < '5'?'0':'1';
    }
    return str;
}

/*string fakeBin(string s) 
{
    for (int i = 0; i <= s.length(); i++) {
        if (int(s[i]) < 5)
            s[i] = 0;
        else if (int(s[i]) >= 5)
            s[i] = 1;
    }
    return s;
}*/


int main()
{
    string str = "45385593107843568";
    cout << fakeBin(str) << endl;
}


/* 
#include <string>

std::string fakeBin(std::string str){
  for (auto &s : str)
  {
    s = s < '5'?'0':'1';
  }
  return str;
}


#include <string>

std::string fakeBin(std::string str){
  for (int i = 0; i < str.length(); i++)
  {
    str[i] = ((str[i] - '0') > 4) ? '1' : '0';
  }
  return str;
}


#include <string>
#include <algorithm>

std::string fakeBin(std::string str){
  std::transform(str.cbegin(), str.cend(), str.begin(), [](auto const & c){
    return c >= '5' ? '1' : '0';
  });
  return str;
}


#include <string>
#include <regex>
using namespace std;
string fakeBin(string str){
str = regex_replace(str, regex("[1234]"), "0");
str = regex_replace(str, regex("[56789]"), "1");
  return str;
}


#include <string>

std::string fakeBin(std::string str)
{
  for (auto& ch : str) {
    if (ch<'5') ch='0'; else ch='1';
  }
  return str;
}

*/