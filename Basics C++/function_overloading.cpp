#include <iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int add(int x, int y, int z)
{
    return x+y+z;
}
float add(float x, float y, float z, float m)
{
    return x+y+z+m;
}
int main()
{
    float a=10.5,b=20.3,c,d,f;
    c=add(a,b);
    d=add(a,b,c);
    f=add(a,b,c,d);
    cout <<f<<endl;
    cout <<c<<endl;
    cout <<d<<endl;
    
    return 0;
}
