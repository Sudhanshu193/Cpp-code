#include<iostream>
#include<vector>
using namespace std;
void myvector(vector<int>& v1){
  int n;
  cin >> n;
 while (n != -1)
 {
    v1.push_back(n);
    cin >>n;
 }   

}
void print(vector <int>& v1)
{
    for (int i = 0; i < v1.size(); i++)
{
    cout<<v1.at(i)<<" ";
}
}
int main()
{ 
 vector <int> v1;
  myvector(v1);
  print(v1);




 
 

}
