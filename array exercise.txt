 //exercise 1
/*Write a program that takes 10 integers as input from the user and stores them in an array. Then, the program should calculate and print the sum of all the integers in the array.*/

#include <iostream>
using namespace std;
int main() {
    int my_array[10];
    int sum = 0;
    // taking input from user and storing in array
    for (int i = 0; i < 10; i++) {
        cout << "Enter integer " << i+1 << ": ";
        cin >> my_array[i];
    }
    
    // calculating sum of all integers in array
    for (int i = 0; i < 10; i++) {
        sum += my_array[i];
    }
    cout << "Sum of all integers in array: " << sum << endl;


//exercise 2
/*Write a program that takes 5 float numbers as input from the user and stores them in an array. Then, the program should find and print the largest number in the array.*/

    float my_array[5];
    float max_num;
    // taking input from user and storing in array
    for (int i = 0; i < 5; i++) {
        cout << "Enter float " << i+1 << ": ";
        cin >> my_array[i];
    }
    
    // finding largest number in array
    max_num = my_array[0];
    for (int i = 1; i < 5; i++) {
        if (my_array[i] > max_num) {
            max_num = my_array[i];
        }
    }
    cout << "Largest number in array: " << max_num << endl;
    
   



