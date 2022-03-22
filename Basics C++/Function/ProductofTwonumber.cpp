#include<iostream>
using namespace std;
int product(int a, int b)
{
    return a*b;
}
int main()
{
 int x,y;
 cin>>x>>y;
 int output=product(x,y);
 cout <<"Product of two number is :  "<<output;

}