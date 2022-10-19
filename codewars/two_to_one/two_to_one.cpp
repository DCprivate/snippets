#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2);

};
*/

int main()
{
    string temp = "";
    string alph = "abcdefghijklmnopqrstuvwxyz";
    string s1 = "xyaabbbccccdefww";
    string s2 = "xxxxyyyyabklmopq";
    string s3 = s1 + s2;

    for (int i = 0; i <= alph.length(); i++)
    {
        //cout << alph[i] << endl;
        if (s3.find(alph[i]) != std::string::npos)
        {
            temp += alph[i];
        }
    }

    //cout << longest(s1, s2) << endl;
    //sort(s1.begin(), s1.end());
    cout << temp << endl;
}