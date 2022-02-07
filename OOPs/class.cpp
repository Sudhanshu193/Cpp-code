//class for rectangle
#include<iostream>
using namespace std;
class rectangle
{ 
    public:
    int length;
    int breadth;
    int area()
    {
     return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r1,r2;
    cout<<"Enter the area of rectangle r1"<<endl;
     
    cin >>r1.length>>r1.breadth;
    cout<<r1.area();
}