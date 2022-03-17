#include<iostream>
using namespace std;
int main()
{
    int i,n,factorial=1;

    cout << "Enter the number you want factorial of"<<endl;
    cin >> n;
    
    for(i=1; i<=n; i++)
{
    factorial*=i;
     
}
cout <<"The factorial is: "<<factorial;
return 0;
}
