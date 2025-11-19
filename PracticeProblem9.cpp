// Program to Swap two numbers with the third variable.

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int temp = 0;

    cout << " A before swapping, A = " << a << endl;
    cout << " B before swapping, B = " << b << endl;

    temp = b;
    b = a;
    a = temp;

    cout << " A after swapping, A = " << a << endl;
    cout << " B after swapping, B = " << b << endl;



    return 0;
}
