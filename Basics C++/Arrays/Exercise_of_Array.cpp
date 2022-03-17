#include<iostream>
using namespace std;
int main()
{
    int  A[100],Sum=0 ,n, i;
    float Average;
    cout << "Enter the number of element you want:"<<endl;
    cin >>n;
    cout <<"enter the element for array"<<endl;
    for (i = 0; i <n; i++)
    {
        cin >>A[i];
        Sum+=A[i];
    }
    cout <<"Sum is : "<<Sum;
    Average=float(Sum)/float (n);
    cout <<endl;
    cout <<"The Average is: "<<Average;
    return 0;
}