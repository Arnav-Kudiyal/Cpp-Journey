// Program using constructor to initialize object.

#include<iostream>
#include<string>
using namespace std;

class Details
{
public:
    string name;
    int rollno;

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Roll No = " << rollno << endl;
    }

    Details(string name, int rollno)
    {
        this->name = name;
        this->rollno = rollno;
    }

};



int main()
{
    Details student1("Arnav", 25);
     student1.display();

    return 0;
}
