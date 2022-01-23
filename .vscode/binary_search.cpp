#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n=10, L=0,H=9 ,key,mid;
    cout << "Enter the element: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin >>arr[i];
    }
    cout << "Enter the key" <<endl;
    cin >>key;
while (L<=H)
{
    mid=(L+H)/2;
    if (key==arr[mid])
    {
        cout << "Match found at index: "<<mid;
        return 0;
    }
    else if (key<arr[mid])
    {
        H=mid-1;
    }else
    {
        L=mid+1;
    }
}
    cout <<"match not found";
    return 0;
}