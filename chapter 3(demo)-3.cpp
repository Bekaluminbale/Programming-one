﻿//chapter 3(demo)-3

//continue

#include <iostream>
using namespace std;
int main() {
  int num;
  while (true) {
    cout << "Enter a number ";
    cin >> num;
    if (num == 5) {
      continue;
    }
    cout << "The square of " << num << " is " << num*num << endl;
  }
  return 0;
}
