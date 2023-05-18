#include <iostream>
#include <bitset>
using namespace std;


int main() {

    int x = 100;
    int y = 1000;
    cout << x << ' ' << bitset<32> (x) << endl;
    x = x << 24;
    cout << x << ' ' << bitset<32> (x) << endl;

    int or_bit = (x | y);
    int and_bit = (x & y);

    cout << or_bit << ' ' << bitset<32> (or_bit) << endl;
    cout << and_bit << ' ' << bitset<32> (and_bit) << endl;

    x = 100;
    cout << (x << 1) << ' ' << bitset<32> (x << 1) << endl;
    cout << (x >> 1) << ' ' << bitset<32> (x >> 1) <<endl;

    int mask = (1 << x + y) - 1;
    cout << mask << ' ' << bitset<32> (mask);

    return 0;
}