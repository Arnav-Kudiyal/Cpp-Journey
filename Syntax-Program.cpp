#include<iostream>
#include<string>
using namespace std;


class Teacher
{
  public:
  string Name;
  string Department;
  float salary;
};

int main()
{
  Teacher bca1;
  bca1.Name = "Madhuri Gupta";
  bca1.Department = " BCA";
  bca1.salary = 25000;

  cout<<bca1.salary<<endl;


  return 0;
}
