#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream ofs("My.txt");
  ofs<<"Sudhanshu"<<endl;
  ofs<<25<<endl;
  ofs<<"cs"<<endl;
   ofs.close();
}