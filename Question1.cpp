// Sum of all number from 1 to n which are divisible by 3

#include<iostream>
using namespace std;

int main()
{
    int target,i,sum=0;

    cout<<"Please Enter the target value : "<<endl;
    cin>>target;

    for(i=1;i<=target;i++)
    {
        if(i%3==0)
        {
            sum=sum+i;
        }
       
    }
    cout<<"The sum is : "<<sum<<endl;





    return 0;
}
