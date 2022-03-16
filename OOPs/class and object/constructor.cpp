//Their is 4 type of constructor -> 1. defult constructor  2. Non perimeterized constructor  3. perimeterized constructor
#include <iostream>
using namespace std;
class Rectangle
{
    private:
    int length ;
    int breadth;
    public:
    //non perimeterized constructor
   /* Rectangle()
    {
        length=1;
        breadth=1;
    }
    */
   // perimeterized constructor with making non perimeterized in it.
    Rectangle(int l=1,int b=1)
    {
        setLength(l);
        setBreadth(b);
    }
    // copy constructor
    Rectangle(Rectangle &rect)
    {
        length=rect.length;
        breadth=rect.breadth;
    }
    void setLength(int l)
    {
        if (l<0)
        {
            length=1;
        }
        else
        {
            length=l;
        } 
    }
    void setBreadth(int b)
    {
        if (b<0)
        {
            breadth=1;
        }
        else
        {
            breadth=b;
        }
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
};

int main()
{
    Rectangle r;
    Rectangle r1(10,5);
    Rectangle r2(r);
    cout <<r.area()<<endl;
    cout <<r1.area()<<endl;
    cout <<r2.area();
}