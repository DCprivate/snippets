/*
#include <iostream>
using namespace std;

int main() {

   char letter = 'z';
   cout << typeid(letter).name() << ' ' << typeid(letter - 1).name() << ' ' << letter - 2 << endl;

   return 0;
}
*/


#include <iostream>
using namespace std;

void BackwardsAlphabet(char currLetter){
   if (currLetter == 'a') {
      cout << currLetter << endl;
   }
   else {
      cout << currLetter << " ";
      BackwardsAlphabet(currLetter - 1);
   }
}

int main() {
   char startingLetter = 'z';

   //cin >> startingLetter;

   BackwardsAlphabet(startingLetter);

   return 0;
}
