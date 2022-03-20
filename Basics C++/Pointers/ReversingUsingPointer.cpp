#include<iostream>
using namespace std;
void reverse(int num, int*r)
{
    int rem;
    *r=0;
    while (num>0)
    {
        rem=num%10;
        num=num/10;
        *r=*r*10+rem;
    }
    
}
int main()
{
    int num, rev;
    cout<<"Enter the number: ";
    cin>>num;
    reverse(num, &rev);
    cout<<"After reversing"<<num<<" value is: "<<rev;


}