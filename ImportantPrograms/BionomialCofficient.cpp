/*To calculate nCr*/

#include<iostream>
using namespace std;

int factorial(int a)
{
    int fact = 1;

    for(int i = a; i >= 1; i--)
    {
        fact= fact * i; 
    }
    
    return fact;
}

int main()
{

    int n,r;

    cout<<"Please Enter the value of n :"<<endl;
    cin>>n;

    cout<<"Please Enter the value of r :"<<endl;
    cin>>r;

    int factN = factorial(n);
    int factR = factorial(r);

    int subNR = n-r;

    int factNR = factorial(subNR);
    
    int bioCof = factN/(factR*factNR);

    cout<<"The Bionomial Cofficient of the given expression is : "<<bioCof<<endl;
    
    return 0;
}

