#include <iostream>
#include <string>
using namespace std;
int main()
{
  string a="hello";
  string c;
  int n = a.length(),i;
  for ( i = n-1; i >=0; i--)
  {
      cout<<a[i]<<endl;
      c=c+a[i];
  }
  cout<<c;
}
