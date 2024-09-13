#include <iostream>
#include <string>
using namespace std;

int main() {

   string obj;
   int number;
   
   cin >> obj;
   cin >> number;
   
   while (number != 0) {
      cout << "Eating " << number << " " << obj << " a day keeps you happy and healthy." << endl;
      
      cin >> obj;
      cin >> number;
   }

   return 0;
}
