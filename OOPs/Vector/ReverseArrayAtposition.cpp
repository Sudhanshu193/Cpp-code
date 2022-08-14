#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5,6};
int M;
cin >> M;
int n = sizeof(arr)/sizeof(arr[0]);


for(int i=M+1, j=n-1; i<j; i++, j--)
{
   
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
}
for (int a = 0; a < n; a++)
{
    cout<<arr[a]<<" ";
}


}
