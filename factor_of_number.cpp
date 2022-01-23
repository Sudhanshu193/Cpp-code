#include<iostream>
using namespace  std;
int main()
{
    int i , n;

    cout <<"Enter n: ";
    cin >>n;

    for( i=1; i<=n; i++)
    {
        if(n % i==0)
        {
            cout << i << " is factor of "<<n<<endl;
        }
        
    }
     return 0;

}