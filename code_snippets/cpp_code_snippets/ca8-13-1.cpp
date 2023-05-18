#include <iostream>
#include <string>
using namespace std;

class FoodType {
   public:
      FoodType(string foodType) {
         type = foodType;
         id = nextId;
         nextId += 5;
      }
      FoodType() = default;
      void Print();
   private:
      string type = "None";
      int id = 0;                
      inline static int nextId = 60;
};

inline
void FoodType::Print() {
   cout << id << ": " << type << endl;
}

int main() {
   FoodType order1("Soup");   // Python: order1 = FoodType("Soup")
   FoodType order1a{"soup"};
   FoodType order2("Sandwich");
   FoodType order3("Lobster");

   order3.Print();
   FoodType order4;
   order1a.Print();
   order4.Print();
}
