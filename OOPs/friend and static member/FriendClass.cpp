#include<iostream>
using namespace std;
class yours;
class my
{
    private:
    int a;
    my ()
    {
      a=10;
    }
 friend yours;
};
class yours
{
   public:
    my m;
    void fun()
    {
        cout <<m.a;
    } 
};

