/* If any number like 145 , digits cube sum is equal 
to the orignal number then it is said too be amstrong*/
#include<iostream>
using namespace std;
int main()
{
    int r , n ,m,sum=0;
    cout << "enter n"<<endl;
    cin >> n;
    m=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r*r*r;
    }
    if (m==sum)
    {
        cout << "Its armstrong"<<endl;
    }else
    cout<<"its not ";
   return 0; 
}