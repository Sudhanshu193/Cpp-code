#include <iostream>
using namespace std;
int main()
{
    int x;
    int *ptr;
    ptr=&x;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<&x<<endl;
    cout<<&ptr<<endl;
    cout<<x<<endl;
    cout<<*ptr<<endl;

}