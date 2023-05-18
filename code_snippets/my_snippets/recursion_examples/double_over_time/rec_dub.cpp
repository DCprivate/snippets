#include <iostream>
using namespace std;


int doubler(int x, int n) {
    if (n <= 0)  
        return x;
    else
        //cout << x << ' ';
        return doubler(x*2, n-1);
}

int main() {

    int start = 1;
    int days = 10;

    cout << doubler(start, days) << endl;

    return 0;
}