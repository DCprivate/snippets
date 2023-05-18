#include <iostream>
using namespace std;


void pass_by_value(char* s) {

    cout << &s << endl;

    for (int i = 0; i < strlen(s); i++) {
        cout << s[i] * 2 << ' ';
    }
    cout << endl;
}


/*
void pass_by_ref(int &a[]) {
    for (int i = 0; i < sizeof(a); i++) {
        a[i] *= 3;
    }
}
*/





int main() {
    string s = "Testing this cstring";

    //pass_by_value(s);

    /*cout << &s << endl;
    
    for (int i = 0; i < strlen(s); i++) {
        cout << s[i] << ' ';
    }
    cout << endl;
    */

    //cout << pass_by_ref(*arr) << endl;
    

}