#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int, string> m;
    m.insert(pair<int,string>(1, "Sudhanshu"));
    m.insert(pair<int,string>(2, "Shailesh"));
    m.insert(pair<int,string>(3, "Ritesh"));
    map<int, string>::iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}