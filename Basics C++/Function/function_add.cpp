#include <iostream>
using namespace std;
int add(int x, int y)
{
    int z;
    z=x+y;
    return z;
}
int main()
{
    int a,b,c;
    cout <<"Enter the number to add"<<endl;
    cin >> a >>b;
    c=add(a,b);
    cout <<"Sum is : "<<c;
    return 0;
}
