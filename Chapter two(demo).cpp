//preprocessor directives
/*preprocessor directives are instructions to the compiler that are executed before the actual compilation process, and they are identified by a # symbol at the beginning of the line.*/
//example
#include <iostream>
#define PI 3.14
using namespace std;
int main() {
    double radius = 5.0;
    double area = PI * radius * radius;
    cout << "The area of a circle with radius " << radius << " is " << area << endl;
    



//C++ keywords
/* are reserved words that have special meanings in the C++ programming language.*/
//example: int, double, while, float, else, switch and etc

//C++ identifiers
/* identifier is a name used to identify a variable, function, class, module, or any other user-defined item.*/
//Example

    int age = 25;
    float height = 1.75;
    string name = "John";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    

//C++ Comments
//used to explain C++ code, and to make it more readable.
//example
cout << "Hello World!"; //This is a comment
       /* The code below will print the words Hello World! to the screen, and it is amazing */
cout << "Hello World!";


//variables
//Variables are containers for storing data values.
//variable declaration
//specify the type and assign it a value:
//example
int myNum = 15;
cout << myNum;

//creating more than one variable
//example
int x = 5, y = 6, z = 50;
cout << x + y + z;

//assign a variable 
/*sets the value of the memory location associated with the variable to the specified value*/
//example 

  int num = 5; // assigning the value 5 to the variable num
  cout << "The value of num is: " << num << endl;
  

//basic data types 
//variable in C++ must be a specified data type:
//example

  int my_int = 42; // integer (whole number) type
  double my_double = 3.14; // floating-point (decimal) type
  char my_char = 'a'; // character type
  bool my_bool = true; // boolean (true/false) type
  cout << my_int << endl;
  cout << my_double << endl;
  cout << my_char << endl;
  cout << my_bool << endl;
  

//characters
//The char data type is used to store a single character
//Example
char myGrade = 'B';
cout << myGrade;


//constants 
/*are used to define values that cannot be changed during the execution of a program*/

    const int MAX_VALUE = 50;
    const string GREETING = "Hello, World!";
    cout << "The maximum value is: " << MAX_VALUE << endl;
    cout << "The value of pi is: " << PI << endl;
    cout << GREETING << endl;
    

//input /output statements 
/*refer to the process of sending data into a program (input) and receiving data from a program (output), respectively.*/
//example

   
  
   cout << "Enter your name: ";
   cin >> name; 
   cout << "Enter your age: ";
   cin >> age; 
   cout << "Hello, " << name << "! You are " << age << " years old." << endl;   
   

//operators
//arthimetic operators
//example

    int num1 = 10;
    int num2 = 5;
    // addition
    int sum = num1 + num2;
    cout << "Sum: " << sum << endl;
    // subtraction
    int diff = num1 - num2;
    cout << "Difference: " << diff << endl;
    // multiplication
    int prod = num1 * num2;
    cout << "Product: " << prod << endl;
    // division
    int quotient = num1 / num2;
    cout << "Quotient: " << quotient << endl;  
    // modulus (remainder)
    int remainder = num1 % num2;
    cout << "Remainder: " << remainder << endl;   
    
//assignment operators
//used to assign values to variables.
int t = 10;

//relational operators 
/*Relational operators in C++ are used to compare two values and return a boolean value (true or false) based on the result of the comparison.*/
//example

    int a = 10;
    int b = 5;
    // greater than operator
    if (a > b) {
        cout << "a is greater than b" << endl;
    }
    // less than operator
    if (b < a) {
        cout << "b is less than a" << endl;
    }
    // greater than or equal to operator
    if (a >= b) {
        cout << "a is greater than or equal to b" << endl;
    }
    // less than or equal to operator
    if (b <= a) {
        cout << "b is less than or equal to a" << endl;
    }
    // equal to operator
    if (a == b) {
        cout << "a is equal to b" << endl;
    }
    // not equal to operator
    if (a != b) {
        cout << "a is not equal to b" << endl;
    }
    


//logical operators 
//are used to determine the logic between variables or values:
//example

   int h= 10;
   int i= 20;
   if (h== 10 && i == 20) {
      cout << "h is equal to 10 and i is equal to 20" << endl;
   }  
   if (h == 10 || i == 30) {
      cout << "Either h is equal to 10 or i is equal to 30" << endl;
   }  
   if (!(h == 5)) {
      cout << "h is not equal to 5" << endl;
   }
   


//bitwise operators 
//Bitwise operators in C++ are used to manipulate individual bits within a value.
//example

    int n = 5;     // 0101 in binary
    int r = 3;     // 0011 in binary
    int c = n & r; // 0001 in binary (result of bitwise AND)
    cout <<"c is="<<c<<endl;   // prints 1
    



//increment/decrement operators 

    int s = 5;
    int o = s++; // o = 5, s = 6
    int u = ++s; // u = 7, s = 7
    int d = 10;
    int e = --d; // e = 9, d = 9
    int f = d--; // f = 9, d = 8
    cout << o << " " << c << " " << e << " " << f;
    

//precedence  of operators
//are used to determine the order in which operations are executed in an expression.
//example

    int m = 5, l = 10, q= 15;
    int result1 = m + l* q; // Multiply l and q first, then add m
    int result2 = (m + l) * q; // Add m and l first, then multiply by q
    cout << "Result 1: " << result1 << endl; // Output: 155
    cout << "Result 2: " << result2 << endl; // Output: 225
    

//simple type convesion
//the process of converting a value of one data type to another data type.

//example


    // Implicit conversion
    int p = 5;
    float v = p;
    cout << "Implicit conversion: " << x << " (int) to " << v << " (float)" << endl;
    
    // Explicit conversion
    float w = 3.14;
    int g = (int) w;
    cout << "Explicit conversion: " << a << " (float) to " << g << " (int)" << endl;   
    return 0;
}
