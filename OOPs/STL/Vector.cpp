#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v={10,20,30,40,50};
    v.push_back(35);
    v.push_back(24);
   // First method of itration
    // for(int x:v)
    // {
    //     cout<<x<<endl;      
    // }

    //Second method of iterator 
    vector<int> :: iterator itr;
    for(itr=v.begin() ; itr!=v.end() ; itr++)
    {
        cout<<*itr<<endl;
    }
}