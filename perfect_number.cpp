#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;

    cout <<"Enter the n"<<endl;
    cin >> n;
for ( i = 1; i <=n; i++)
{
    if (n%i==0)
    {
     sum+=i;
    }
    
}
if (2*n==sum)
{
   cout << "Number " << n <<" is perfect number.";
}
else
cout<<"Number is not perfect number";

 return 0;
}