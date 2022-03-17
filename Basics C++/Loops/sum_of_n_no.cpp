#include<iostream>
using namespace std;
int main()
{
    int n , sum = 0;
    cout << "Enter the number of term you want sum" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
     sum+=i;
    }
    
   cout << "The sum is: "<<sum;
   return 0;
}