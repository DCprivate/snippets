#include <iostream>
#include <cmath>

using namespace std;

bool is_square(int n)
{
    double sq = sqrt(n);
    //cout << "value: " << n << endl;
    //cout << "square: " << sq << endl;
    //cout << "floor: " << floor(sq) << endl;

    if (floor(sq) == sq)
        return true;
    else 
        return false;
}

/*
bool is_square(int n) {
    return sqrt(n) == floor(sqrt(n));
}
*/

int main()
{
    cout << is_square(-1) << endl;
    cout << is_square(0) << endl;
    cout << is_square(3) << endl;
    cout << is_square(4) << endl;
    cout << is_square(25) << endl;
    cout << is_square(26) << endl;
}
