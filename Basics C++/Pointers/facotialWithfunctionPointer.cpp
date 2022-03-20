#include<iostream>
using namespace std;
void factorial(int n, int *f)
{    int i;
    *f =1;
    for ( i = 1; i <=n; i++)
    {
        *f=*f*i;
    }

}
int main()
{
    int n, fact;
    cout<<"Enter the number: ";
    cin>>n;
    factorial(n,&fact);
    cout<<"Factorial of"<<n<<" is: "<<fact;
    return 0;

}