/*Program to Gernate Fibonacci series*/

#include<iostream>
using namespace std;

void Fibonacci(int n)
{
  int sum=0;
  int a,b,temp;
  a=0;
  b=1;

  cout<<a<<" "<<b<<" ";

  for(int i=2; i<n; i++)
  {
    sum=a+b;
    cout<<sum<<" ";
    
    temp=a;
    a=b;
    b=sum;
  }


}

int main()
{
  int target=5;

  Fibonacci(target);

  

  return 0;
}
