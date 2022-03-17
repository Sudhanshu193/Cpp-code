#include<iostream>
using namespace std;
int main()
{
    int number, remender;
    cout << "Enter n "<< endl;
    cin >>number;
    while (number>0)
    {
        remender=number%10;
        number=number/10;
        cout <<remender<<endl;
        /*cout <<number <<endl;*/
    }
    
}