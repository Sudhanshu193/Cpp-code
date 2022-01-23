#include<iostream>
using namespace std;
int main()
/*{
    int arr[3]={10,100,150};
    int *p[3];
    for (int i = 0; i < 3; i++)
    {
        p[i]=&arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Value of arr["<<i<<"]="<<*p[i]<<endl;
    }
    return 0;   
}*/
{
     string arr[4]={"raja","nikhil","sudhanshu","priyanshu"};
     string *name[4];
    for (int i = 0; i < 4; i++)
    {
        name[i]=&arr[i];
    }
    cout <<"the names are: ";
    for (int i = 0; i < 4; i++)
    {
        cout<<*name[i]<<endl;
    }
   return 0; 
}