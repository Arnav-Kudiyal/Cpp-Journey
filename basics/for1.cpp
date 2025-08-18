/*Sum of number 1 to n*/

#include<iostream>
using namespace std;

int main()
{
    int target;
    int sum=0;

    cout<<"Please Enter the Number"<<endl;
    cin>>target;

    for(int i=1;i<=target;i++)
    {
        sum = sum+i;
    }
    cout<<"The sum of the digits are :"<<sum<<endl;
    return 0;
}
