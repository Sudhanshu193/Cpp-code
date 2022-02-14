#include<iostream>
using namespace std;
class Base
{
    public :
    Base()
    {
        cout<<"Default of base"<<endl;
    }
    Base(int x)
    {
        cout <<"param of base"<<x<<endl;
    }
};
class Derived : public Base
{
    public:
    Derived()
    {
        cout <<"Defult of derived "<<endl;

    }
    Derived(int a)
    {
        cout<<"param of derived"<<a;
    }
    Derived(int x ,int a): Base(x)
    {
      cout  <<"param of derived"<<a;
    }
};
int main()
{   
    Derived d(10,20);

    
}