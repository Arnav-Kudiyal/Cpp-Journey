#include<iostream>
using namespace std;

class A
{
private:
    int x;

public:
    void input()
    {
        cout << "Enter the value" << endl;
        cin >> x;
    }

    void display()
    {
        cout << x;
    }

    A operator ++(int)
    {
        A temp = *this;
        x = x + 1;
        return temp; 
    }
};

int main()
{
    A obj1, obj2;
    obj1.input();

    obj2 = obj1++;
    cout << "Old Value"  << endl;
    obj2.display();

    cout << endl;

    cout << "New Value" << endl;
    obj1.display();


    return 0;
}
