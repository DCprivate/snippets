#include <iostream>
#include <string>
using namespace std;

class Pointer {
public:
    Pointer(int x = 0, int y = 0);
    ~Pointer();
    void Print();
    int x;
    int y;
};

Pointer::Pointer(int _x, int _y) {
    x = _x;
    y = _y;
}

Pointer::~Pointer() {
    cout << "in deconstructor" << endl;
}

void Pointer::Print() {
   cout << "(" << x << ", ";
   cout << y << ")" << endl;
}

int main() {

    int x;
    int* xPtr;

    x = 5;
    cout << &x << endl;

    xPtr = &x;
    cout << xPtr << endl;

    cout << x << endl;
    *xPtr = 10;
    cout << x << endl;

    // unknown address
    int* ptr;
    *ptr = 5;
    cout << &ptr << "asdf" << *ptr << endl;

    Pointer* p = new Pointer;
    (*p).Print();

    Pointer* p2 = new Pointer(1, 2);
    (*p2).Print();
    cout << "asdf"<< *ptr << endl;
    //cout << *p << endl;

    delete p;
    delete p2;

    (*p2).Print();
    //cout << 

    return 0;
}