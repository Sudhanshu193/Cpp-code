#include<iostream>
using namespace std;
int sum(int n)
{
    int z=0;
    for (int i = 0; i <=n; i++)
    {
        z+=i;
    }
    return z;
}
int main()
{
    int n;
    cout<<"Enter number you want till: "<<endl;
    cin>>n;
    int output=sum(n);
   cout<<"The sum is: "<<output;
}