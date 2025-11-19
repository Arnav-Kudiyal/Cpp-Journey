//  Program using structure to store student details.
#include<iostream>
#include<string>
using namespace std;

struct Details
{
    string name;
    int RollNo;
    string Course;
};


int main()
{
    Details student1;
    student1.name = "Arnav";
    student1.RollNo = 25;
    student1.Course = "BCA";

    cout << student1.name << endl;
    cout << student1.RollNo << endl;
    cout << student1.Course<< endl;

    return 0;
}
