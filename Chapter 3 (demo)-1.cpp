//Chapter 3 (demo)
//go to statemet


#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "Enter an integer ";
  cin >> a;
start:
  if (a < 0) {
    cout << " Try again.\n";
    goto start;
  }
  cout << "The cube of  " << a<< " is " << a*a *a << endl;
  return 0;
}
