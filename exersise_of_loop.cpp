#include<iostream>
using namespace std;
int main()
{
    int number,remender,reverse=0,m;

    cout <<"Enter the  number";
    cin >> number;
     m=number;
    while (number>0)
    {
        remender=number%10;
        number=number/10;
        reverse=reverse*10+remender;
    }
    cout <<"The reverse of number is : "<<reverse<<endl;
   if (reverse==m)
    {
        cout << "It is  palindrome"<<endl;
    }
    else if (reverse!=m)
    {
       cout <<"It is not  palindrome";
    }
    return 0; 
}