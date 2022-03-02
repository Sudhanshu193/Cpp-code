#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream of("My.txt");
  of<<"Sudhanshu"<<endl;
  of<<25<<endl;
  of<<"cs"<<endl;
   of.close();
}