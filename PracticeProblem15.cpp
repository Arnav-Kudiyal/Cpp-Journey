// Program to find Subtraction of Two matrices.

#include<iostream>
using namespace std;

int main()
{
    int r, d;

    cout << "Please enter the number of rows "<< endl;
    cin >> r;

    cout << "Please enter the number of columns"<< endl;
    cin >> d;

    int a[r][d], b[r][d], c[r][d];


    cout << "Enter the elements in matrix A " << endl;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0 ; j < d; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements in matrix B " << endl;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0 ; j < d; j++)
        {
            cin >> b[i][j];
        }
    }


    for(int i = 0; i < r; i++)
    {
        for(int j = 0 ; j < d; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Resultant matrix " << endl;
     for(int i = 0; i < r; i++)
    {
        for(int j = 0 ; j < d; j++)
        {
            cout << c[i][j] << " "; 
        }
        cout << endl;
    }


    return 0;
}
