// init3.cpp: Bypasses the automatic call to the default
//            constructor by using Whole's initalizer list.

#include <iostream> 
#include <string>
using namespace std;

struct Part {
    int n;
    Part() {
        cout << "Executing Part()\n";
        n = 0;
    }
    Part(int n) {
        cout << "Executing Part(int)\n";
        this->n = n;
    }
    void display() const {
        cout << "n = " << n << endl;  
    }
};

struct Whole {
    string s;
    Part p;
    Whole() = default;
    Whole(const string& s, const Part& p) : s(s), p(p) {
        cout << "Running Whole's ctor\n";
    }
    void display() const {
        cout << "s = " << s << " ";
        p.display();
    }
};

int main() {
    Part p(1);
    Whole w("one", p);
    w.display();
    Whole w2(w);
    w2.display();

    Whole w3;
}

/* Output:
Executing Part(int)
Running Whole's ctor
s = one n = 1
s = one n = 1
Executing Part()
*/
