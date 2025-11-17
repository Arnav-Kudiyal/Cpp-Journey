//Program to passing object as function arguments
#include<iostream>
#include<string>
using namespace std;

class  Details
{
public:
    string name;
    int rollno;

    void info()
    {
        cout << "Enter name" << endl;
        cin >> name;

        cout << "Enter Roll No" << endl;
        cin >> rollno;
    }
};

void displayinfo(Details s)
{
    cout << s.name << endl;
    cout << s.rollno << endl;
}
int main()
{
    Details object;
    object.info();
    displayinfo(object);



    return 0;
}
