#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float r1,r2;
    cout <<"Enter a ,b ,c"<<endl;
    cin >>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout <<r1;
    cout <<r2;

}