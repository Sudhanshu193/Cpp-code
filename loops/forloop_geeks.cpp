#include<iostream>
using namespace std;
int main()
{
    int number,i,sum=0;
    cout <<"Enter the natural number : "<<endl;
    cin >>number;
 cout <<"The first  "<<number<<" natural number is :"<<endl;

    for ( i = 1; i <= number; i++)
    {
       cout<<" "<<i ;
       sum+=i;
    }
    cout <<endl;
    cout <<"The Sum of Natural Number upto "<<number<<" terms:"<<sum<<endl;
   return 0; 
}