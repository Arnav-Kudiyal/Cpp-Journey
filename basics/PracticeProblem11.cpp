// Program to reverse a number.

#include<iostream>
using namespace std;

int main()
{
    int number;
    int rev = 0;

    cout << "Please enter the number you want to reverse" << endl;
    cin >> number;

    while(number != 0)
    {
        int mod = number % 10;
        rev = 10 * rev + mod;
        number = number / 10;

    }

    cout << "Reversed number = " << rev ;
    return 0;
}
