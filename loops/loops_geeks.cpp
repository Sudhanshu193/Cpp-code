#include <iostream>
using namespace std;
//code for prime
/*int main()
{
    int number, count=0,i;
cout << "Enter the number: "<<endl;
cin >> number;
for ( i = 1; i <=number; i++)
{
    if (number %i==0)
    {
        count++;
    }  
}
if (count==2)
{
    cout <<"The number "<<number <<" is prime."<<endl;
}else
{
    cout <<"The number "<<number <<" is not prime."<<endl;
}
return 0;
}*/
//code for factorial 
/*int main()
{
    int number;
    factorial=1;
    cout <<"Enter the number: "<<endl;
    cin>>number;
    for(int i=1; i<=number; i++)
    {
        factorial*=i;
    }
    cout <<"Factorial is: "<<factorial;
 
    return 0;
}*/

int main()
{
    int number;
    cout <<"Enter the number: "<<endl;
    cin>>number;
cout <<"The cube upto "<<number<<" are"<<endl;
for (int i = 1; i <=number; i++)
{
    cout<<i <<" cube is "<<i*i*i<<endl;
}
    return 0;
}