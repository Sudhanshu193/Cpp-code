#include<iostream>
using namespace std;
int main()
{
  int i ,j;
  

  for (i = 1; i <= 7; i++)
  {
      for ( j = 1; j <= 30; j++)
      {
        if ((i==1 || i==2 ) || (i == 6 || i==7))
        {  
            if (j>=1 && j<=9)
            {
                cout <<"*"; 
            } 
            else if ((j>=15 && j<=17) || (j>=25 && j<=27))
            {
                cout<<"8";
            }
            else
            cout<<" ";
               
        }
       
      }
      cout<<"**"<<endl; 
  }

// for ( i = 0; i <= 7; i++)
// {
//     for ( j = 0; j < 18; j++)
//     {
//         if ((i==2|| i==3) && (j==6))
//         {
//             cout<<"*";
//         }
//         else
//         {
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }

  return 0;
}

