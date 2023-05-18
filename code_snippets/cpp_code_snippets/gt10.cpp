#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

bool gt10(int n) {
   return n > 10;
}

int  main() {
   vector<int> v = {15,6,25,18,9,23,20,7,18,1};
   auto iter = v.begin();
   while ((iter = find_if(iter, v.end(), gt10)) != v.end())
       cout << *iter++ << ' ';
   cout << endl;
   sort(begin(v), end(v), greater());
   for (auto iter = begin(v); iter != end(v); ++iter) 
      cout << *iter << endl;
}
