#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area();
    bool issquare();
    ~Rectangle();
};
//scope_resulation is used to write method outside class & through this we can access other members as well.
Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}

Rectangle::Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
    if(l<0)
    {
        length=1;
    }
    else
    {
        length=l;
    }   
}
void Rectangle::setBreadth(int b)
{
    if(b<0)
    {
        breadth=1;
    }
    else
    {
        breadth=b;
    }  
}
int Rectangle::area()
{
    return length*breadth;
}
bool Rectangle::issquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout <<"Rectangle is distroyed"<<endl;
}

int main()
{
    Rectangle r(10,5);
    cout <<"Area is: "<<r.area()<<endl;

    if (r.issquare())
    {
        cout <<"YES"<<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }
}