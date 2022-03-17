#include<iostream>
using namespace std;
float area(int radius)
{
   float pi=3.14;
   return pi*radius*radius;
}
float circumference(int radius)
{
 float pi =3.14;
 return 2*pi*radius;
}
int main()
{
    int radius;
    cin>>radius;
    float Area_circle=area(radius);
    float Cirumference=circumference(radius);
    cout<<"Area is: "<<Area_circle<<endl;
    cout<<"Circumference: "<<Cirumference;
}