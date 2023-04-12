//﻿Chap-4 two dime(demo)

//Declaration and intialization two dimensional array

#include <iostream>
using namespace std;
int main() {
    // declare a bi-dimensional array with 3 rows and 4 columns
    int array[3][4];

    // initialize the array with some values
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            array[i][j] = i + j;
        }
    }
    // print out the values of the array
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
//accessing two dimensional array

// declare and initialize a bi-dimensional array
  int my_array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  
    // access and print out specific elements
    cout << "Element at row 1, column 2: " << array[1][2] << endl;
    
    cout << "Element at row 2, column 0: " << array[2][0] << endl;
    return 0;
}

