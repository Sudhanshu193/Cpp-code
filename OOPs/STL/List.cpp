#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l={10,12,13,15};
    l.push_front(59);
    list<int>:: iterator itr;
    for (itr=l.begin(); itr!=l.end(); itr++)
    {
        cout<<*itr<<endl;
    }
    return 0;
}