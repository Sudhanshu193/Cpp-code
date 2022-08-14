#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
for(int i =0; i<n; i++)
{
    for(int j = 1; j<=n-i-1; j++)
    {
        if(arr[j]< arr[j-1])
            swap(arr[j], arr[j-1]);
    }
}
}
void print(int *arr , int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[]={0, 1, 2, 2, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr, n);
    print(arr, n);

}