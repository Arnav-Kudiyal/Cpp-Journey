// Program to Swap two numbers without a third variable

#include<iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 30;

    cout << " A befor swapping A = " << a << endl;
    cout << " B befor swapping B = " << b << endl;


    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << " A after swapping A = " << a << endl;
    cout << " B after swapping B = " << b << endl;



    return 0;
}
