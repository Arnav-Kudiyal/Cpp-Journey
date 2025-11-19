//Program to calculate factorial using recursion.
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }

}

int main()
{
    int fact;

    cout << "Enter the number whose factorial you want to calculate " << endl;
    cin >> fact;

    cout << factorial(fact) << endl;


    return 0;
}
