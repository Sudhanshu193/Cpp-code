#include <iostream>
using namespace std;
class Demo
{  
    int *p;
 public:
 Demo()
 {   p=new int[10];
     cout <<"constructor created"<<endl;

 }
 ~Demo()
 {   
     cout <<"Destructor deleted"<<endl;
 }
};
void fun()
{
    Demo *p= new Demo();
    delete p;
}
int main()
{
  fun();
}