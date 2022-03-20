#include <iostream>
using namespace std;
int main()
{
    int n;
    int *factorial;
    int x=1;
    factorial=&x;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        x*=i;
    }

    cout<<*factorial;
}