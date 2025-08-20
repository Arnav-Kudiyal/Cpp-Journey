/*When we are talking about structures the main things that need to be clarified is that what is the synatx of the program*/.

/*Here's the basic syntax of the structure:*/

#include<iostream>
using namespace std;

struct name_structure  // First write the struct keyword and then your structure name.
{
  int Name; // Do not intialize in the value of a here. It will gernate an error.
  float RollNo;  // There variables can be of any data types and as many.
  char Total;
};


int main()
{

  ReportCard student1;  // Start with writing structure name and then name of the variable that you want to create ** Do not add (.) in b/w them.
  student1.Name = "Arnav Kudiyal";  // To add the data write your variable name then dot(.) operator and then then add data to your variables.
  student1.RollNo = 1;
  student1.Total = 416;

  cout<<"The Name of the student is :"<<student1.Name<<endl;   // To print we still have to define our variable name and the variable connected by the dot operator
  cout<<"The Roll No. of the student is :"<<student1.RollNo<<endl;
  cout<<"The Marks  of the student is :"<<student1.Total<<endl;


  return 0;
}
