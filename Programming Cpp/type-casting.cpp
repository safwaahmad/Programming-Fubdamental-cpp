//TYPE - CONVERSION
//converting one data  type into other
// 01 - TYPE CONVERSION - IMPLICITE - small to big
// 02 - TYPE CASTING    - EXPLICITE - big to small
#include<iostream>
using namespace std;

int main (){
cout<<("-------TYPE-CONVERSION-------")<<endl;
cout<<("---------IMPLICITE-----------")<<endl;
char grade = 'A';
int value = grade;
cout<<value<<endl;
cout<<("--------TYPE-CASTING-------")<<endl;
cout<<("----------EXPLICITE--------")<<endl;
double price  = 100.99;
int newprice  = (int)price;
cout<<newprice<<endl;
}
