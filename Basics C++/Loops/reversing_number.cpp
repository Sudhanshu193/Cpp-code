#include<iostream>
using namespace std;
int main()
{
    int remender,number,reverse=0;
     cout  <<"Enter the number: ";
     cin >> number;

     while (number>0)
     {
        remender=number%10;
        number=number/10;
        reverse=reverse*10+remender;
     }
     cout << "The revers number is: "<<reverse;
     return 0;
}