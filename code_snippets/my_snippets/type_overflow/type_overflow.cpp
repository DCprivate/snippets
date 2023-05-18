#include <iostream>
using namespace std;

int main() {

    // not working the way I want it to :(

    int inty = INT_MAX;
    unsigned unsigned_int = INT_MAX;
    unsigned short int unsigned_short_int = USHRT_MAX;
    short int short_int = SHRT_MAX;
    unsigned long int unsigned_long_int = 0;
    long int long_int = 0;
    unsigned long long int unsigned_long_long_int = 0;
    long long int long_long_int = 0;
    double dooble = 0.0;
    long double long_dooble = 0.0;

    cout << inty << endl << unsigned_int << endl <<
            unsigned_short_int << endl << short_int << endl <<
            unsigned_long_int << endl << long_int << endl <<
            unsigned_long_long_int << endl << long_long_int << endl <<
            dooble << endl << long_dooble << endl;

    cout << inty + 1 << endl << unsigned_int + 1;

    return 0;
}