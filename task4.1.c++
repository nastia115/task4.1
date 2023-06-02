 #include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void printMessage() {
   cout << "Yes" << endl;
}
int main() {
srand(time(NULL));

   
   int randomNumber = rand() % 101;

 
   if(randomNumber > 50) {
      
      printMessage();
   }
}

