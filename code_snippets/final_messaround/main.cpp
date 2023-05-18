#include <iostream>
#include <fstream>
using namespace std;


int main() {
    int x = 0;
    int* y = &x;

    int* test = new int;
    test = y;


    cout << x << ' ' << y << ' ' << test << endl;

    string input_words;
    ifstream file_input; // not checking file to save lines >:)
    file_input.open("myfile.txt");
    while (file_input >> input_words) {
        cout << input_words << endl;
    }
    file_input.close();


    for (int i = 0; i < 10; i++) {
        cout << i;
    }

    return 0;
}