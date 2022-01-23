#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    
    int smallOutput = factorial(n-1);
    cout<<n<<endl;
    return n*smallOutput;

}

int main()
{
    int n;
    cin >>n;
    int output=factorial(n);
    cout<<"Factorial of number n is : " <<output<<endl;
}