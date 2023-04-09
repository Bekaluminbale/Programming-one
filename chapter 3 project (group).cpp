//Group members name
// Bekalu Minbale     Ru 0744/14
// Umer Ismael
//Nardos 
//Dureti Tamanna





//chapter 3 (demo)

#include<iostream>
using namespace std;
int main()
{

//if statement


char letter = 'a';

   if (letter == 'a') {
      cout << "The letter is 'a'" << endl;
   }
   else {
      cout << "The letter is not 'a'" << endl;
   }


//two way if else

char letter;

   cout << "Enter a letter: ";
   cin >> letter;

   if (letter == 'a') {
      cout << "The letter is 'a'" << endl;
   }
   else {
      cout << "The letter is not 'a'" << endl;
   }

//multi way if else statement

char letter;

   cout << "Enter a letter: ";
   cin >> letter;

   if (letter == 'a') {
      cout << "The letter is 'a'" << endl;
   }
   else if (letter == 'b') {
      cout << "The letter is 'b'" << endl;
   }
   else if (letter == 'c') {
      cout << "The letter is 'c'" << endl;
      if (letter == 'c' && letter != 'a' && letter != 'b') {
         cout << "The letter is neither 'a' nor 'b'" << endl;
      }
   }
   else {
      cout << "The letter is not 'a', 'b', or 'c'" << endl;
   }




//switch







   int num = 2;
   
   switch(num) {
      case 1:
         cout << "The number is 1." << endl;
         break;
      case 2:
         cout << "The number is 2." << endl;
         break;
      case 3:
         cout << "The number is 3." << endl;
         break;
      default:
         cout << "The number is not 1, 2, or 3." << endl;
   }




//nested swich

   int num1 = 2;
   int num2 = 3;
   
   switch(num1) {
      case 1:
         switch(num2) {
            case 1:
               cout << "Both numbers are 1." << endl;
               break;
            default:
               cout << "First number is 1, second number is not 1." << endl;
         }
         break;
      case 2:
         switch(num2) {
            case 2:
               cout << "Both numbers are 2." << endl;
               break;
            default:
               cout << "First number is 2, second number is not 2." << endl;
         }
         break;
      default:
         cout << "Neither number is 1 or 2." << endl;
   }



//for loop

char letter;

   for(letter = 'a'; letter <= 'e'; letter++) {
      cout << letter << endl;
   }



//while loop
   char letter = 'a';

   while(letter <= 'e') {
      cout << letter << endl;
      letter++;
   }

//do while loop

   char letter = 'a';

   do {
      cout << letter << endl;
      letter++;
   } while(letter <= 'e');





//chapter 3 (exercise 1)
//by if else



  char ch;
  cout << "Enter a character ";
  cin >> ch;
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
    cout << ch << " is a vowel " << endl;
  } 
  else {
    cout <<ch << " is a consonant "  << endl;
  }
  



//exercise 2
//by if else

  int score;
  char grade;
  cout << "Enter your score  ";
  cin >> score;
  if (score >= 95) {
    cout << "Your grade is A+" << grade  << endl;
  }
  else if (score >= 85 && score <= 94) {
    cout << "Your grade is A" << grade << endl;
  }
  else if (score >= 80 && score <= 84) {
    cout << "Your grade is A-" << grade << "-" << endl;
  }
  else if(score >= 75 && score <= 79){
  	cout <<"your grade is B+ " << grade << endl;
  }
  else if (score >=70 && score <= 74){
  cout <<"your grade is B " << grade << endl;
  }
  else if (score >= 65 && score <= 69){
  	cout <<"your grade is B-" << grade << endl;
  }
  else if (score >= 60 && score <= 64){
  	cout <<"your grade is C+" << grade << endl;
  	}
  	else if (score >= 50 && score <= 59){
  	cout <<"your grade is C " << grade << endl;
  	}
  else {
    cout << "Your grade is D " << grade << endl;
 
}


//exercise 3
//if else

  int a, b, c;
  cout << "Enter three numbers ";
  cin >> a >> b>> c;
  if (a >= b && a >= c) {
    cout  << "the greatest number is a= "<<a<< endl;
  }
 else if (b >= a && b >= c) {
    cout << "the greatest number is b =" <<b<< endl;
  } 
else {
    cout  << " the greatest number is c= " <<c<< endl;
  
}



//exercise 4
//by if else


  int a, b, c;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;
  if (a < b && b < c) {
    cout << "Increasing" << endl;
  }
  else if (a > b && b > c) {
    cout << "Decreasing" << endl;
  }
  else {
    cout << "Neither increasing nor decreasing order" << endl;
  
}


//exercise 5

  int mark1, mark2, mark3, total;
  float average;
  cout << "Enter three course marks ";
  cin >> mark1 >> mark2 >> mark3;
  total = mark1 + mark2 + mark3;
  average = total / 3.0;
  cout << "Total Mark: " << total << endl;
  cout << "Average Mark: " << average << endl;
  if (average >= 50) {
    cout << "Pass" << endl;
  }
  else {
    cout << "Fail" << endl;
  }
  return 0;
}





