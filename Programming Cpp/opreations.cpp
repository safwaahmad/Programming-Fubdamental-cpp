#include<iostream>
using namespace std;
int main(){
    int a = 10 , b = 20 ;
    cout<<("------ARITHMETIC OPREATIONS------")<<endl;
    cout<<("SUM is             :")<<(a+b)<<endl;
    cout<<("SUBTRACTION    is  :")<<(a-b)<<endl;
    cout<<("MULTIPLICATION is  :")<<(a*b)<<endl;
    cout<<("DIVIDE is          :")<<(a/b)<<endl;
    cout<<("MODULUS is         :")<<(a%b)<<endl;

    cout<<("------RELATIONAL OPREATIONS------")<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a!=b)<<endl;

    cout<<("------LOGICAL OPREATIONS------")<<endl;
    cout<<((a<b) && (b>a))<<endl;
    cout<<((a<b) || (b>a))<<endl;
    cout<<not(1)<<endl;

    cout<<("------UNAIARY OPREATIONS------")<<endl;
     int c=a++;// update -> kaam -> p`poosstt
     cout << "c = " << c << endl; //10 
     cout << "a = " << a << endl; //11 
     return 0; 
     }

