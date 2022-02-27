#include <iostream>
using namespace std;
class Test
{
    public:
    Test ()
    {
        cout <<"constructor is called"<<endl;
    }

    ~Test()
    {
        cout << "destructor destroyed everything "<<endl;
    }
};
void fun()
{
    Test t;
}
int main()
{
    fun();

}