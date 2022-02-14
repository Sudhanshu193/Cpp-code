#include <iostream>
using namespace std;
class Circle
{
  private:
  int radius;
  public:
  
  int getRadius()
  {
      return radius;
  }  
  void setRadius(int x)
  {
      radius=x;
  }
  float area()
  {
      return 3.14 *radius*radius;
  }
};
int main()
{   int x;

    Circle c;
    cout <<"Enter the radius: "<<endl;
    cin >>x;
    c.setRadius(x);
    cout <<c.getRadius()<<endl;
    cout<<c.area()<<endl;


}