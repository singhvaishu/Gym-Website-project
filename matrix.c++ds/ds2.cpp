// Subtraction of two matrix
#include <iostream>
#include <iostream>
using namespace std;
int main()
{
    int M1[10][10], M2[10][10], Res[10][10];
    int R, C, i, j;
    cout << "Enter the size of matrix:" << endl;
    cin >> R >> C;

    cout << "Enter the element of first matrix:" << endl;
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
            cin >> M1[i][j];
    }
    cout << "Enter the element of second matrix:" << endl;
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
            cin >> M2[i][j];
    }
    cout << "subtraction of two matrix:";
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            Res[i][j] = M1[i][j] - M2[i][j];
            cout << Res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}