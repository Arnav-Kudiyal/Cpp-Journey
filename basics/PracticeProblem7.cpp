// Program to demonstrate break and continue statement.
#include<iostream>
using namespace std;

int main()
{
    int target = 5;

    for(int i = 0; i <=10; i++)
    {
        if(i == target)
        {
            break;
        }
        else
        {
            cout << i << endl;;
        }
    }
    
    for(int j = 10; j <=20; j++)
    {
        if(j == 15)
        {
            continue;
        }
        else
        {
            cout << j << endl;;
        }
    }

    return 0;
}
