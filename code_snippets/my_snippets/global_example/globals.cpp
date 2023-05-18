#include <iostream>
using namespace std;

const int tryToChangeMe = 1;
int changeMe = 1;

void change_global() {
    changeMe++;
    //tryToChangeMe++; // can't :^)
}

int main() {

    cout << changeMe << endl;

    change_global();

    cout << changeMe << endl;

    return 0;
}