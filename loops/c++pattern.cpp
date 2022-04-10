#include<iostream>
using namespace std;
int main()
{
  int i ,j;
  

  for (i = 1; i <= 7; i++)
  {
      for ( j = 1; j <=10; j++)
      {
        if (i==1 || i==2 || i == 6 || i==7)
        {  
            cout <<"*";    
        }
      }
      cout<<"**"<<endl; 
  }
  return 0;
}

