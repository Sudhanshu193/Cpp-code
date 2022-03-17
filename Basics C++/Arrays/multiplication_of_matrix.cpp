#include <iostream>
using namespace std;
int main()
{
    int a[5][5], b[5][5], m[5][5], r, c, i, j, k;
    cout << "enter row=";
    cin >> r;
    cout << "enter column=";
    cin >> c;
    cout << "first matrix element="<<endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << " second matrix element="<<endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "multiply of the matrix="<<endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            m[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                m[i][j] += a[i][k] * b[k][j];
            }
        }
    }
cout <<"Multipilcation of matrix:"<<endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << m[i][j] << " ";
        }
        
    }
    return 0;
}