#include <iostream>
using namespace std;
class complex
{
private:
int real;
int img;

public:
complex(int r=0, int i=0)
{
    real=r;
    img=i;
}
friend complex operator+(complex c1 , complex c2);

friend ostream & operator <<(ostream &out , complex &c);

};
complex operator+(complex c1 , complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
ostream & operator<<(ostream &out , complex &c)
{
    out<<c.real<<"+"<<c.img<<"i";
    return out;
}
int main()
{
    complex c1(5,6),c2(3,4),c3;
    c3=c1+c2;
    cout<<c3;
}
