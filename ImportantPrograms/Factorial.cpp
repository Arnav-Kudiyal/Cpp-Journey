#include<iostream>
using namespace std;

int target;

void factorial(int n)
{
    int factorial1=1;
    for(int i=n;i>=1;i--)
    {
       factorial1=factorial1*i;
       
    }
    cout<<"The Factorial of the number is:"<<factorial1<<endl;
}

int main()
{
    cout<<"Please eneter the number whose factorial you want to know :"<<endl;
    cin>>target;

    factorial(target);
    return 0;
}
