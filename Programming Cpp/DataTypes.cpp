#include<iostream>   
using namespace std ; 
int main()            
{
    cout<<("They all are premitive datav type");
    int number = 32;  //4 bytes  
    char character = 'a'; // 1Bytes
    float floatpoint = 3.456; // 4bytes
    double Double = 12345;  //8 bytes   
    bool bool1 = true ; // 1 byte

    cout<<("The size of int is       : ")<<sizeof(number)<<("--->And tyhe output is :")<<number<<endl;
    cout<<("The size of character is : ")<<sizeof(character)<<("--->And tyhe output is :")<<character<<endl;
    cout<<("The size of float is     : ")<<sizeof(floatpoint)<<("--->And tyhe output is :")<<floatpoint<<endl;
    cout<<("The size of double is    : ")<<sizeof(Double)<<("--->And tyhe output is :")<<Double<<endl;
    cout<<("The size of bool is      : ")<<sizeof(bool1)<<("--->And tyhe output is :")<<bool1<<endl;

}
