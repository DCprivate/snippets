#include <iostream>

using namespace std;

int main() {
    int x = -1;
    int y = 0;

    y = x > 0 ? 1 : 0;
    cout << "y: " << y << " " << "x: " << x << endl;

    y = x < 0 ? -1 : x > 0 ? 1 : 0;
    cout << "y: " << y << " " << "x: " << x << endl;

    y = (x < 0) ? -1 : ((x > 0) ? 1 : 0);
    cout << "y: " << y << " " << "x: " << x << endl;

    return 0;
}