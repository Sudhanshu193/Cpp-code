#include <iostream>
using namespace std;
int main()
{
    char a='A';
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<(char)(a+j) << " ";
        }
       cout<<endl; 
    }

   for (int k = 4; k > 1; k--)
   {
        for (int l = 0; l <k-1; l++)
        {
            cout<<(char)(a+l)<<" ";
        }
        cout<<endl;
   }
    
}
