#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("My.txt");
    string str;
    int x;
    string s;
    infile>>str;
    infile>>x;
    infile>>s;
    cout<<str<<" "<<x<<" "<<s;

    
    if(infile.eof())
    {
        cout<<"end of file"<<endl;
    }
    infile.close();

}