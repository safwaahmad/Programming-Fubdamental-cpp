// C++ has the following conditional statements:

// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false
// Use else if to specify a new condition to test, if the first condition is false
// Use switch to specify many alternative blocks of code to be executed
// <------------------------------------------------------------------------->

// ------Syntax OF IF STATEMENT---------
//if (condition) {
  // block of code to be executed if the condition is true
//}

//----Syntax of IF else Statement--------
// //Use the else statement to specify a block of code to be executed if the condition is false.

// if (condition) {
//   // block of code to be executed if the condition is true
// } else {
//   // block of code to be executed if the condition is false
// }

//----------Syantax of  else if Statement-------
// Use the else if statement to specify a new condition if the first condition is false.


// if (condition1) {
//   // block of code to be executed if condition1 is true
// } else if (condition2) {
//   // block of code to be executed if the condition1 is false and condition2 is true
// } else {
//   // block of code to be executed if the condition1 is false and condition2 is false
// }

#include<iostream>   
using namespace std ; 
int main()            
{
    //Single selection--(if)------
    int numbers ;
    cout<<("Enter number you got : ");
    cin>>numbers;
if (numbers<50){
    cout<<("Got poor number : ");
}
if (numbers==50){
    cout<<("Got average  number : ");
}
if (numbers>50){
    cout<<("Got Excellent  number . ")<<endl;
}
    //Double selection--(if/else)------
int num1 = 50;
int num2 = 30;
if(num1>=num2){
    cout<<("Number one is grater")<<endl;
}
else
{
    cout<<("Number 2 is grater")<<endl;
}
 int age;
 cin>>age;
 cout<<age<<endl;
 if (age >=18){
    cout<<("You can vote");
 }
 else{
    cout<<("Not eligbible ");
 }
}
