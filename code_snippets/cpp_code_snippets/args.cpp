// args.cpp: Gets file names from the command line
#include <fstream>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void read_data(const string& infname, vector<int>& v) {
    ifstream ifs(infname);  // Opens file for input (will close automatically)
    if (!ifs)
        cout << "Could not open " << infname << endl;
    else  {
        int n;
        while (ifs >> n)    // Will break on end-of-file
            v.push_back(n);
    }
}

void write_data(const string& outfname, const vector<int>& v) {
    ofstream ofs(outfname);  // Opens file for output (will close automatically)
    ofs << fixed << setprecision(2);
    for (int n: v)
        ofs << n/100.0 << endl;
}

int main(int argc, char* argv[]) {  // Or char** argv
    if (argc == 3) {
        vector<int> data;
        read_data(argv[1], data);
        write_data(argv[2], data);
    }
}
