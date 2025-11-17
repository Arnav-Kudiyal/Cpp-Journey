//Program to implement Inline Function
#include<iostream>
using namespace std;

inline int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int x = 10;
    int y = 20;

    cout << add(x, y) << endl;

    return 0;
}

/* Inline Function is a function in which the function is directly added to the place where it is called */
