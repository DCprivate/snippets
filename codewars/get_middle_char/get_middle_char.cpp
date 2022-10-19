#include <iostream>
#include <string>

using namespace std;


string get_middle_char(string s)
{
    int i = s.length();
    //string temp = "";

    if (i % 2 == 0){ // is even
        //temp.push_back(s[i/2 - 1]);
        //temp.push_back(s[i/2]);
        //return temp;
        return s.substr(i/2 - 1, 2);       
    }
    else { // is odd
        //temp.push_back(s[i/2]);
        //return temp;
        return s.substr(i/2, 1);
    }
}


int main()
{
    string test_01 = "test"; // expected - es
    string test_02 = "testing"; // expected - t
    string test_03 = "aaaaaqaaaaa";
    string test_04 = "aaaaxaaaa";
    string test_05 = "aaaasdaaaa";

    //cout << test_01.substr(1, 2) << endl;
    cout << get_middle_char(test_01) << endl;

    //cout << test_02.substr(0, 6) << endl;
    cout << get_middle_char(test_02) << endl;

    cout << get_middle_char(test_03) << endl;
    cout << get_middle_char(test_04) << endl;
    cout << get_middle_char(test_05) << endl;    

}