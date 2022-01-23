#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int n=5, key;
    cout << "Enter the element of array:"<<endl;
    for (int i = 0; i < n; i++)
    {
      cin >>arr[i];
    }
    cout <<"Enter the key: " <<endl;
    cin >>key;
    for (int i = 0; i < n; i++)
    {
        if (key==arr[i])
        {
          cout <<"Match found at index: "<< i <<endl;
          return 0;
        }  
    }
    cout <<"Match not found";
    return 0;  
}