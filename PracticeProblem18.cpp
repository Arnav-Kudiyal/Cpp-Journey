//Program to calculate Fibonacci series using recursion.
#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int fab = 10;
    
    cout << fibonacci(fab) << endl;
    return 0;
}
