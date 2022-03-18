#include <iostream>
using namespace std;
void prime(int number)
{ int count=0;
  for (int i = 1; i <= number; i++)
  {
      if (number%i==0)
      {
          count++;
      }
  }
     if (count==2)
     {
         cout<<"its Prime ";
     }
     else
     {
         cout<<"Not a prime";
     }
}
int main()
{
    int number;
    cin>>number;
    prime(number);

}