#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cin>>n;
    for(int i=1; i<=n; i+=2)
    {   
        cout<<i<<endl;
        sum+=i;
    }
    cout <<"Sum of odd number is: "<<sum;
}
