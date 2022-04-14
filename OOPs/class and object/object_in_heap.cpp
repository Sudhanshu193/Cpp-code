#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length,breadth;
    int area()
    {
        return length*breadth;
    }
};
int main()
{
  Rectangle *p;
  //memory alloted in heap 
  p=new Rectangle();
  p->length=10;
  p->breadth=5;
  Rectangle *q=new Rectangle();
  q->length=10;
  q->breadth=20;
  cout <<p->area()<<endl;
  cout <<q->area();

  
}