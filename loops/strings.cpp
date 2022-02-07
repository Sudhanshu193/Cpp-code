#include <iostream>
#include <string>
using namespace std;

int main()
{
        string a;
        string b;
        cin >> a >>b;
       int len1=a.size();
       int len2=b.size();
       string c=a+b;

       cout <<len1<<" "<<len2<<endl;
       cout <<c<<endl;
        char temp=a[0];
        a[0]=b[0];
        b[0]=temp;
        cout <<a<<" "<<b;
    return 0;
}