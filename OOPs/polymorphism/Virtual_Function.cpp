#include <iostream>
using namespace std;
class base
{ public:
  virtual void fun()
  {
      cout <<"hello it's base"<<endl;
  }  
};
class derived : public base
{
  public :
   void fun()
   {
       cout <<"hi it is derived"<<endl;
   }  
};

int main()
{
    base *p= new derived();
    p->fun(); 
}