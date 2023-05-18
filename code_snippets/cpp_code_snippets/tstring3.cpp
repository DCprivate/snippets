// tstring3.cpp
#include "string3.h"
#include <iostream>
using namespace std;

int main() {
    String s("hello");
    String t("there");
    cout << s + " " + t << endl;
}

/* Outout:
ctor
init from "hello"
ctor
init from "there"
ctor
init from " "
ctor
init from ""
ctor
init from ""
hello there
dtor
dtor
dtor
dtor
dtor
*/
