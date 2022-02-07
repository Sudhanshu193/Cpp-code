#include <iostream>
using namespace std;
class Student{
    private:
    int roll;
    string name;
    int Mathsmarks;
    int phymarks;
    int chemarks;
    public:
    Student(int r, string n, int m, int p, int c)
    {
       roll=r;
       name=n;
       Mathsmarks=m;
       phymarks=p;
       chemarks=c;
    }
    int total()
    {
        return Mathsmarks+phymarks+chemarks;
    }
    char grade()
    {
        float avarege=total()/3;
        if (avarege>60)
        {
            return 'A';
        }
        else if (avarege >=40 && avarege<60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }  
    }
};
int main()
{
    int roll;
    string name;
    int m,p,c;
    cout <<"Enter the roll number of student: "<<endl;
    cin >>roll;
    cout <<"Enter the name of Student: "<<endl;
    cin >>name;
    cout <<"Enter the marks of maths physics and chemistry: "<<endl;
    cin >>m>>p>>c;
    Student s(roll,name,m,p,c);
    cout<<"Total marks is: "<<s.total()<<endl;
    cout<< "Grade student opt: "<<s.grade();
}