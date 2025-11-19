// Factorial of n

#include<iostream>
using namespace std;

int main()
{
    int target,i,factorial=1;

    cout<<"Please enter the target value"<<endl;
    cin>>target;

    for(i=target;i>=1;i--)
    {
        factorial=factorial*i;
    }

    cout<<"The factorial is :"<<factorial<<endl;


    return 0;
}
