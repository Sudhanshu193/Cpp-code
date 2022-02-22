// Write a program to perform polymorphism 1)baseclass-shape , derived class-rectangle and circle;
#include<iostream>
using namespace std;
class shape{
    
    public :
    virtual float area()=0;
    virtual float perimeter()=0;
};
class ectangle  : public shape
{
    private :
     int length ;
     int breadth;
     public:
     rectangle(int l=1 , int b=1)
     {
       length=l;
       breadth=b;
     }

     float area()
     {
       return length*breadth;
     }
     float perimeter()
     {
       return 2*(length+breadth);

     }
};
class circle : public shape
{
     private:
     int radius;
     public:
     circle(int r=0)
     {
       radius=r;
     }
     float area()
     {
      return 3.14 *radius*radius;
     }
     float perimeter()
     {
         return 2*3.14*radius;
     }
};
int main()
{
    shape *p = new rectangle(10,5);
   cout<<"Area of Rectangle :"<< p->area()<<endl;
   cout <<"Perimeter of Rectangle: "<<p->perimeter()<<endl;

   p= new circle(5);
   cout <<"Area of Circle: "<<p->area()<<endl;
   cout <<"Perimeter of Circle: "<<p->perimeter()<<endl;
   return 0;
}
