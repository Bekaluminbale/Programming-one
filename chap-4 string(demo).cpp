//chap-4 string(demo)

//declaration with example

#include <iostream>
#include <string>
using namespace std;
int main() {
    string name = "Beky";
    cout << "My name is " << name << endl;

//Exercise 1
/*Declare a string array named "colors" with the following colors: "red", "green", "blue", "yellow", "orange". Print out the third color in the array.*/
cout<<"output of exercise 1"<<endl;
    string colors[5] = {"red", "green", "blue", "yellow", "orange"};
    cout << colors[2] << endl;

//Exercise 2
/*Declare a string array named "fruits" with the following fruits: "apple", "banana", "kiwi", "mango". Change the second fruit in the array to "pear". Print out all the fruits in the array.*/
cout<<"output of exercise 2"<<endl;
    string fruits[4] = {"apple", "banana", "kiwi", "mango"};
    fruits[1] = "pear";
    for (int i=0; i<4; i++) {
        cout << fruits[i] << endl;
    }
 
//Exercise 3
/*Declare a string array named "cities" with the following cities: "New York", "Los Angeles", "Chicago", "Houston". Print out the length of the third city in the array.*/
cout<<"output of exercise 3"<<endl;
    string cities[4] = {"New York", "Los Angeles", "Chicago", "Houston"};
    cout << cities[2].length() << endl;
    return 0;
}
