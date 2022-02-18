#include<iostream>
using namespace std;
class Animal
{ public:
  void display()
  {
      cout <<"Hello i m Animal"<<endl;
  }

};
class Dog : public Animal
{
   public:
   void display()
   {
       cout <<"Hello i m dog"<<endl;
   }
};
int main()
{
    Animal a;
     a.display();
     Dog d;
     d.display();
     //if in dog we give parameter to display (int x) and want to d.display() like this it will not work.
     //d.Animal ::display(); here we can call fun. of base class by using object.base  :: function.
}