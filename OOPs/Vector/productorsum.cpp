#include<iostream>
using namespace std;
// long long int sumOrProduct(long long int n, long long int q)
// {

// }
int main()
{
   long long int n,q;
    cout<<"enter n";
    cin >>n;
    cout<<"enter q";
    cin>> q;
  const unsigned int M = 1000000007;
    
	long long int sum =0;
    long long int product=1;
    for(int i =1; i<=n ; i++)
    {
        if(q==1)
        {
            sum= sum +i;
           
        }
        else if(q==2)
        {
           ( product = product *i)%M;
        }
    }
    if(q==1)
        cout<<sum<<endl;
 else
    cout<<product;
}
