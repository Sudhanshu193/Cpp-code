#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n=10,max;
    cout <<"Enter the element of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
max=arr[0];
for (int i = 1; i < n; i++)
{
    if (max<arr[i])
    {
        max=arr[i];
    }  
}
cout << "Max is: "<<max<<endl;
 return 0;   
}