//Chapter 2 (Exercise)
// Exercise: 1 (give a statement)

 //this program calculates the product of three integers.
 //int x, y, z, result; // declaring variables as int data type
// cout << "Enter three integers: "; // prompting user to enter three integers
// cin >> x >> y >> z; // reading three integers from keyboard and storing them in x, y, and z variables
// result = x * y * z; // computing the product of integers and assigning it to result variable
 //cout<< "The product is " << result << endl; // displaying product value
 //return 0; // indicating successful termination of program

//Exercise 2

#include <iostream>
using namespace std;
int main() {
    int num1, num2, sum, diff1, diff2, pro, quo1, quo2;
    cout << "Enter first integer: ";   // Prompt user to enter the first integer
    cin >> num1;
    cout << "Enter second integer: "; // Prompt user to enter the second integer
    cin >> num2;
    sum = num1 + num2;  // Compute the sum of two integers
    diff1 = num1 - num2;  // Compute the difference of the two numbers (num1 - num2)
    diff2 = num2 - num1;  // Compute the difference of the two numbers (num2 - num1)
    pro= num1 * num2; // Compute the product of two integers
    quo1 = num1 / num2; // Compute the division of the two numbers (num1 / num2)
    quo2 = num2 / num1; // Compute the division of the two numbers (num2 / num1)

    cout << "Sum  = " << sum << endl;  //Display the sum of two integers
    cout << "Diff = " << diff1 << " (or " << diff2 << ")" << endl; // Display the difference of two integers
    cout << "Pro = " << pro<< endl; // Display the product of two integers

    // Determine and display the greater number
    if (num1 > num2) {
        cout << "The greater number is " << num1 << endl;
    }
 else {
        cout << "The greater number is " << num2 << endl;
    }

    // Determine and display the smaller number
    if (num1 < num2) {
        cout << "The smaller number is " << num1 << endl;  
 } 
else {
        cout << "The smaller number is " << num2 << endl;
    }
    


//Exercise 3


    const double PI = 3.14; // Define the value of PI constant
    double radius, circumference; // Declare variables for storing radius and circumference

    cout << "Enter the radius of the circle: "; // Prompt user to enter the radius of the circle
    cin >> radius; // Read the radius from user

    circumference = 2 * PI * radius; // Compute the circumference using the formula

    cout << "The circumference of the circle is " << circumference << endl; // Display the circumference of the circle

    



//Exercise 4

    double a, b, c, root1, root2, imaginary; //declaration
  
  cout << "Enter coefficients a, b and c: "; //prompt user to enter cofficients
    cin >> a >> b >> c; //store cofficients

    double discriminant = b*b - 4*a*c; //calculate discriminant 

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant))/(2*a); 
        root2 = (-b - sqrt(discriminant))/(2*a); //calculate roots using quadratic formula
        cout << "Root1 = " << root1 << " and    Root2 = " << root2 << endl; //display output
    }
    else if (discriminant == 0) {
        root1 = root2 = -b/(2*a); //calculate single root
        cout << "Root1 = Root2 = " << root1 << ";" << endl; //print roots 
    }
    else {
        double realPart = -b/(2*a);
        imaginary = sqrt(-discriminant)/(2*a);
        cout << "Root1 = " << realPart << " + " << imaginary << "i and Root2 = " << realPart << " - " << imaginary << "i" << endl;
    }

    return 0;
}




