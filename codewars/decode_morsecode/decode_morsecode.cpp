#include <iostream>
#include <map>
using namespace std;

string decode_morse(string morse_code) {
    // ToDo: Accept dots, dashes and spaces, return human-readable message
    string decoded;
    map<string, string> morse_table;

    morse_table.insert({"A",".-"}, {"B","-..."}, {"C","-.-."}, {"D","-.."}, {"E","."}, {"",""}, {"",""}, {"",""}, {"",""}, {"",""}, 
                       {"",""}, {"",""}, {"",""}, {"",""}, {"",""}, {"",""}, {"",""}, {"",""}, {"",""}, {"",""}
                       {"",""}, {"",""}, {"",""}, {"",""}, {"",""}, {"",""}, {"",""}, {"",""}, {"",""}, {"",""});

    return decoded;
}