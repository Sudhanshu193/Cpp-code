#include<iostream>
using namespace std;
int main()
{
    int b[3][3],c[3][3],i,j;

    
    for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 3; j++)
          cout << *(*(a + i) + j) << " ";
      cout << endl;
    }

    int A[10] = {12,23};
    cout << *(A + 1) << endl;

    cout << "Enter matrix 1 element"<<endl;
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
          cin >>*(*(a+i)+j);
        }  
        cout <<endl;
    }
    cout <<"Enter matrix 2 element"<<endl;
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
          cin >>*(*(b+i)+j);
      }       
        cout<<endl; 
    }
    for ( i = 0; i < 3; i++)
    {
        for ( i = 0; j < 3; j++)
        {
            *(*(c+i)+j)=*(*(a+i)+j) + *(*(b+i)+j);
        } 
    }
    for ( i = 0; i < 3; i++)
    {
      for ( i = 0; j < 3; j++)
      {
          cout <<*(*(c+i)+j);
      }
    }  
  return 0;  
}