﻿//Chapter 3 (demo)
//one way if statement
//It executes an action if and only if the condition is true.
//example

#include <iostream>
using namespace std;
int main() {
    int age;//variable declaration
        cout <<"enter an age";
        cin>>age;
    if (age >= 18) {
        cout << "You are an adult." << endl; // This statement will be executed if age is greater than or equal to 18
    }
   





//two way if-else statement
//execute based on if the condition is true or false. 
//example


    
     cout<<"enter an age"; 
     cin>>age; //read an age from the user
    if (age >= 18) {
        cout << "You are an adult." << endl; // This statement will be executed if age is greater than or equal to 18
    } 
else {
        cout << "You are not an adult." << endl; // This statement will be executed if age is less than 18
    }
    


//multi-way if-else statement 
/*a conditional statement that evaluates multiple conditions and executes different code blocks depending on the outcome of each condition*/

//example


    
cout <<"enter an age.";
cin>>age;    
    if (age >= 18) {
        cout << "You are an adult." << endl; // This statement will be executed if age is greater than or equal to 18
    }
     else if (age >= 13) {
        cout << "You are a teenager." << endl; // This statement will be executed if the first condition is false and age is greater than or equal to 13
    } else {
        cout << "You are a child." << endl; // This statement will be executed if both previous conditions are false
    }
  



//nested if statement 
/* a nested if statement is an if statement that is placed inside another if statement as one of its possible outcomes or condition*/
//example


   int x = 10; //assigning a variable
   int y = 20; //declaring and assigning variable

   if (x == 10) { // check if x is equal to 10
      if (y == 20) { // check if y is equal to 20, only if x is equal to 10
         cout << "x is 10 and y is 20" << endl; // print message if both conditions are true
      }
   }

   return 0;
}

