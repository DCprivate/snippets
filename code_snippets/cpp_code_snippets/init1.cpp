// init1.cpp: Shows how a default constructor is used.
//            In this example, it is missing, so there is a compiler error.

#include <iostream>
#include <string>
using namespace std;

int plus1(int i) {
    return i+1;
}
class Part {
    int n = 0;
    int m = plus1(n);
public:
    Part() {
        cout << m << endl;
    } 
    Part(int en) {
        n = en;
    }
    int get_n() const {
        return n;
    }
    int get_m() const {
        return m;
    }
};

class Whole {
    std::string s;
    Part p;
public:
    void display_part() {
        cout << p.get_n() << ", " << p.get_m() << endl;
    }
};

int main() {
    Whole w;
    cout << sizeof(w) << endl;
    w.display_part();

}

/* Compile Error:
/Users/chuck/Desktop/UVU/2370/Code/init1.cpp:21:11: error: call to implicitly-deleted default constructor of 'Whole'
    Whole w;
          ^
/Users/chuck/Desktop/UVU/2370/Code/init1.cpp:16:10: note: default constructor of 'Whole' is implicitly deleted because field 'p' has no default constructor
    Part p;
         ^
1 error generated.
*/
