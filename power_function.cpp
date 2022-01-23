#include <iostream>
using namespace std;
int pow(int x, int y)
{
    int power=1,i;
    for ( i = 1; i <= y; i++)
    {
        power=power*x;
        
    }
    return power;
}
int main()
{
    int m=2, n=3, result;
    result=pow(m,n);
    cout <<"The power of m ,n is :  "<<result;
    return 0;
}