/*Calculate the sum of number from 1 to n using function */

#include<iostream>
using namespace std;

int target,sum=0;

void sumFun()
{
    for(int i=1;i<=target;i++)
    {
        sum+=i;
    }
    cout<<"The sum of the numbers are :"<<sum<<endl;
}


int main()
{
    cout<<"Please enter the target value :"<<endl;
    cin>>target;

    sumFun();
    sumFun();
    sumFun();

    return 0;
}

