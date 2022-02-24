#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b;
    try
    {
        if(b==0)
        {
          throw 101;
          c=a/b;
          cout<<c<<endl;
        }
    }
    catch(int e)
    {
      cout <<"Division by zero "<<" "<<"Error Code "<<e<<endl;
    }
    cout  <<"bye";
}