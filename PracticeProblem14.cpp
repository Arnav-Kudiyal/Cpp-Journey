#include<iostream>
using namespace std;

int main()
{
    int r, d;

    cout << "Enter the rows" << endl;
    cin >> r;

    cout << "Enter the columns" << endl;
    cin >> d;

    int a[r][d], b[r][d],  c[r][d];

    cout << "Enter elements of Matrix A:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < d; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < d; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "Resultant Matrix:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < d; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < d; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}
