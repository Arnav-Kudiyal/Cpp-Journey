//Program to show multiple Inheritance with ambiguity resolution
#include<iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "This id the display function of class A" << endl;
    }
};

class B
{
public:
    void display()
    {
        cout << "This is the display function class B" << endl;
    }
};

class C : public A, public B
{
public:

};

int main()
{
    C obj1;
    obj1.A::display();
    obj1.B::display();



    return 0;
}
