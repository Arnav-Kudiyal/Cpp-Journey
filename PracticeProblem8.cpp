// Program to demonstrate goto statement.

#include<iostream>
using namespace std;

int main()
{
    int a = 0;

    start:
        cout << a << endl;
        a++;

        if(a <=10)
        {
            goto start;
        }

    return 0;
}
