#include<iostream>
using namespace std;

void Prime(int n)
{
  if(n==1 || n==0)
  {
    cout<<"The provided number is not a prime"<<endl;
    return ;
  }
  else
  {
    for(int i=2; i<=n; i++)
    {
      if(i%n==0)
      {
        cout<<"The given number is not a Prime number"<<endl;
        return ;
      }
      else
      {
        cout<<"The given number is a Prime number"<<endl;
        return;
      }
    }
  }

}

int main()
{
  int target;

  cout<<"Please enter the number that you want to check as Prime"<<endl;
  cin>>target;

  Prime(target);

  return 0;
}
