#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    {
        ofstream ofs("text.dat");
        for (;;) {
            cout << "Enter some text (Enter to quit): ";
            string s;
            getline(cin, s);
            if (s.size() == 0)
                break;
            ofs << s << endl;
        }
    }

    ifstream ifs("text.dat");
    string s;
    while (getline(ifs, s))
        cout << s << endl;
}