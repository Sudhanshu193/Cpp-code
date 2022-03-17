#include <iostream>
using namespace std;
int max(int a, int b, int c)
{
    if (a>b && a>c)
    {
        return a;
    }
    else if (b>c)
    {
        return b;
    }else
    {
        return c;
    }
}

int main()
{
    int x=200, y=40, z=10, result;
     result=max(x,y,z);
     cout << "The max is:"<<result;
     return 0;
}