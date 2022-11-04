// Sum of two matrix
#include <iostream>
using namespace std;
int main()
{
    int M1[10][10], M2[10][10], Res[10][10];
    int R, C, i, j;
    cout << "Enter the size of matrix:" << endl;
    cin >> R >> C;
    cout << endl
         << "Enter the element of first matrix:";
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
            cin >> M1[i][j];
    }
    cout << endl
         << "Enter the element of second matrix:";
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
            cin >> M2[i][j];
    }
    cout << endl
         << "sum of two matrix are:";
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            Res[i][j] = M1[i][j] + M2[i][j];
            cout << Res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
