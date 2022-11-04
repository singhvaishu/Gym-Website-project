#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][2], ab[3][2], i, j, k, multiplication;
    int sum = 0;
    cout << endl
         << "Enter the elements of first elements:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl
         << "Enter the elements of second elements:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> b[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            ab[i][j] = sum;
        }
    }
    cout << endl
         << "1st matrix:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << "2st matrix:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << multiplication << " ";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << ab[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
