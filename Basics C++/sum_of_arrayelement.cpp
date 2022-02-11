#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4 ,6, 7, 8};
    int n=5,sum=0;
    cout <<"The sum of array is: ";
    for (int i = 0; i <n ; i++)
    {
        sum=sum+arr[i];
    }
    cout <<sum;
    return 0;
}