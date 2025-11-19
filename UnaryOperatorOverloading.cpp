//Program to overload Unary Operator
#include<iostream>
using namespace std;

class A
{
private:
    int x;

public: 
    void input()
    {
        cout << "Enter the Number" << endl;
        cin >> x;
    }

    void display()
    {
        cout << x << endl;
    }

    void operator-()
    {
        x = -x;
    }
};


int main()
{
    A obj1;
    obj1.input();
    
    -obj1;
    obj1.display();

    return 0;
}
