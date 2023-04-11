//exercise from the slide 
﻿
	
#include <iostream>
using namespace std;
int main() {
  int sum = 0;
  // using for loop
  for (int i = 1; i <= 100; i++) {
    sum += i;
  }
  cout << "Sum  is: " << sum << endl;

  


//2

  // using for loop and if statement
  for (int i = 0; i <= 100; i++) {
    if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
      cout << i << " ";
    }
  }
  cout << endl;
 

//exercise3

  int num, fact = 1;
  // using for loop
  cout << "Using for loop" << endl;
  cout << "Enter a number ";
  cin >> num;
  for (int i = 1; i <= num; i++) {
    fact *= i;
  }
  cout << "Factorial of " << num << " is " << fact << endl;


  // using while loop
  cout << "Using while loop" << endl;
  fact = 1;
  cout << "Enter a number ";
  cin >> num;
  int j = 1;
  while (j <= num) {
    fact *= j;
    j++;
  }
  cout << "Factorial of " << num << " is " << fact << endl;

  // using do while loop
  cout << "Using do while loop" << endl;
  fact = 1;
  cout << "Enter a number ";
  cin >> num;
  int k = 1;
  do {
    fact *= k;
    k++;
  } while (k <= num);
  cout << "Factorial of " << num << " is " << fact << endl;
  
//exercise 5


  int  count = 0;
  // using while loop
  
  while (num <= 10) {
    sum += num;
    count++;
    num++;
  }
  double avg = (double)sum / count;
  cout << "Average of numbers from 1 to 10 is: " << avg << endl;
  return 0;
}
