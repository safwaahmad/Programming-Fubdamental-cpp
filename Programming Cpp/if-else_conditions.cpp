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
    cout<<("Number one is grater");
}
else
{
    cout<<("Number 2 is grater");
}
}
