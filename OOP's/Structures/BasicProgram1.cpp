#include<iostream>
using namespace std;
 
struct ReportCard
{
  string Name;
  int RollNo;
  int Total;
};


int main()
 {

  ReportCard student1;
  student1.Name = "Arnav Kudiyal";
  student1.RollNo = 1;
  student1.Total = 416;

  cout<<"The Name of the student is :"<<student1.Name<<endl;
  cout<<"The Roll No. of the student is :"<<student1.RollNo<<endl;
  cout<<"The Marks  of the student is :"<<student1.Total<<endl;



  return 0;
 }
