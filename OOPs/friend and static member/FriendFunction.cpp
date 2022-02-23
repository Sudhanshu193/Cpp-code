#include <iostream>
using namespace std;
class test
{
    private:
      int a;
    protected:
      int b;
    public:
      int c; 
   friend void fun();        
};
void fun()
{
   test T;
    T.a =10;
    T.b = 15;
    T.c = 5;
    
    
}
