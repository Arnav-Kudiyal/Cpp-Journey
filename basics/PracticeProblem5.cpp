// Sum of even numbers from 1 to n using while loop

#include<iostream>
using namespace std;

int main()
{
    int target,i=1;
    int sum=0;

    cout<<"Please enter the target value"<<endl;
    cin>>target;

    while (i<=target)
    {
        if(i%2==0)
        {
            sum=sum+i;
           
        }
         i++;
    }
    cout<<sum<<endl;

    return 0;
}
