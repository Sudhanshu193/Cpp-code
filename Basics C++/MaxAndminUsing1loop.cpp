#include<iostream>
using namespace std;
int main()
{
    int arr[4]={5,4,6,8};
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<4; i++)
    {
      if (max < arr[i])
      {
          max=arr[i];
      }
      if(min > arr[i])
      {
          min=arr[i];
      }
      
    }
    cout<<max<<endl<<min;
}