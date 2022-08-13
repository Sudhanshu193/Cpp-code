#include<bits/stdc++.h>
#include<vector>
using namespace std;
// void pairsum(vector<int>&arr, int s)
// {
//   int n = arr.size();
//   vector<pair<int, int>>v;
//   for (int i = 0; i < n; i++)
//   {
//     v.push_back({arr[i], i});
//   }
// sort(v.begin(), v.end());
// int start=0;
// int last= n-1;

// while (start<last)
// {
//     int sum = v[start].first +v[last].first;
//     if(sum == s)
//         cout<< v[start].first << v[last].first;
//     else if(sum>s)
//         last ++;
//     else
//         start;
// }

  

int main()
{ 
 vector<int>arr={1,2,3,4,6};
int s;
cin >> s;
int  n= arr.size();
for(int i = 0; i < n; i++)
{
    for (int j = i+1; j <n; j++)
    {
        int sum=arr[i] + arr[j];
        if(sum==s)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
        
    }
    
}



}
