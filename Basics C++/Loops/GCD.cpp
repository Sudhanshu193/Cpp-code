#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout << "Enter the number";
    cin >>m >> n;
    while (m!=n)
    {
        if(m>n)
        
            m=m-n;
        else
            n=n-m;
    }
    cout << "The GCD is: "<< m;
    return 0;
}