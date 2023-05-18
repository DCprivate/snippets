#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string name;    // first name
    int id;

    for (;;) {
        cout << "Enter a name followed by a number (q to quit): ";
        string line;
        getline(cin, line);
        istringstream ss(line);
        ss >> name >> id;
        if (!ss) {
            cout << "invalid input\n";
            continue;
        }

        if (name[0] == 'q')
            break;
        cout << name << ", " << id << endl;
    }
}