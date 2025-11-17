//Program to overload ++Operator(post and Pre).
#include<iostream>
using namespace std;

class A
{
private:
    int x;

public:
    void input()
    {
        cout << "Enter the number " << endl;
        cin >> x;
    }

    void display()
    {
        cout << x << endl;
    }

    void operator ++()
    {
        x = x + 1;
    }
    
};

int main()
{
    A obj1;
    obj1.input();

    ++obj1;

    obj1.display();

    return 0;
}
