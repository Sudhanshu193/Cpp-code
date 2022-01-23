#include<iostream>
using namespace std;
template <class T>
T maxium( T a, T b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    
    cout << maxium(10,5)<<endl;
    cout <<maxium(12.4,12.2)<<endl;
    return 0;
}