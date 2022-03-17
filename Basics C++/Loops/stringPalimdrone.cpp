#include <iostream>
#include <string>
using namespace std;
int main()
{
  string a;
  cin>>a;
  string c;
  int n = a.length(),i;
  for ( i = n-1; i >=0; i--)
  {
      cout<<a[i]<<endl;
      c=c+a[i];
  }

  if (c==a)
  {
      cout<<"Yes "<<a<<" is a palimdrone";
  }
  else
  {
      cout<<"No this is not palindrone";
  }
  
  
}