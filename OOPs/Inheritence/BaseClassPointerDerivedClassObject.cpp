#include<iostream>
using namespace std;
class Rectangle
{
 public:
 int length;
 int breadth;
 
 int area()
 {
     return length*breadth;
 }
};
class cuboid : public Rectangle
{
    public:
    int height;
     int volume()
     {
         return length*breadth*height;
     }

};
int main()
{
  Rectangle *d;
  d = new cuboid();
   d->length=10;
   d->breadth=2;
  //    d->height=3;
  cout<<d->area()<<endl;
 // cout<<d->volume(); here you can only call the function/method of only base class

 

}