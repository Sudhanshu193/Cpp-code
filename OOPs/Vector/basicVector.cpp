#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector <int> v;
   
   v.push_back(12);
   v.push_back(17);
   v.push_back(3);
   v.push_back(4);

   cout<<"Vector:";
//inserting vslues in array
v.insert(v.begin() +2 ,6);
for (int i = 0; i < v.size(); i++)
{
    cout<< v.at(i)<<" ";
}
cout<<endl;
//erasing any element from vector 
v.erase(v.begin()+1);
for (int i = 0; i < v.size(); i++)
{
    cout<< v.at(i)<<" ";
}
cout<<endl;
v.clear();
for (int i = 0; i < v.size(); i++)
{
    cout<< v.at(i)<<" ";
}
cout<<v.empty(); 
}
