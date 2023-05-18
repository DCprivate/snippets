#include <iostream>
using namespace std;

int main() {

    string s = "We'll continue our quest in space."
                "There will be more shuttle flights "
                "and more shuttle crews and,  yes,  "
                "more volunteers, more civilians,  "
                "more teachers in space.  Nothing ends "
                "here;  our hopes and our journeys continue!";
    string word = "more";

    string s2 = "this is a test for test ing the test";
    string word2 = "test";
    

    //cout << s.find("more"); // finds the index of first instance



    // try getting size of the word to find and shit through entire string
    //cout << word << ' ' << sizeof(word) << endl;
    //cout << sizeof(s[0]);

    int count = 0;
    int index = s2.find(word2);

    while (index != string::npos) {
        count++;
        index = s2.find(word2, index + 1);
    }
    cout << count;

    return 0;
}