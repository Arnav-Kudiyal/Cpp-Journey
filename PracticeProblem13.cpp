// Program to find minimum element in an array.
#include<iostream>
using namespace std;

int main()
{
    int digit;
    int list[10];

    cout << " Enter the numbers in the array" << endl;

    for(int i = 0; i < 10; i++)
    {
        cin >> list[i];
    }

    for(int i = 0; i < 10; i++)
    {
        if (list[i] < digit)
        {
            digit = list[i];
        }
        
    }

    cout << "The minimum number in the array is " << digit;

    return 0;
}
