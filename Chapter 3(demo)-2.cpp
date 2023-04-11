//Chapter 3(demo)-2
//break


#include <iostream>
using namespace std;
int main() {
  int num;
  while (true) {
    cout << "Enter a number ";
    cin >> num;
    if (num == 0) {
      cout << "Exiting program.\n";
      break;
    }
    cout << "The square of " << num << " is " << num*num << endl;
  }
  return 0;
}

