/*To calculate sum of digits of a number*/

#include<iostream>
using namespace std;

int sumofdigits(int num)
{
    int sum=0;

    while(num>0)
    {
        int lastdigit = num % 10;
        num = num / 10;
        sum = sum + lastdigit;
    }
        return sum;

}
int main()
{
    cout<<"The sum og the number is : "<<sumofdigits(2563)<<endl;

    return 0;
}
