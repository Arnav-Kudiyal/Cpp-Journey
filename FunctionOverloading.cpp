//Program to show concept of Function Overloading.
#include<iostream>
using namespace std;

class A
{
public:
    int a, b, c;

    void add(int x, int y)
    {
        int z = x + y;
        cout << z << endl;
    }

    void add(int x, int y, int z)
    {
        int n = x + y + z;
        cout << n << endl;
    }
};

int main()
{
    A obj1;
    obj1.add(2, 3);
    obj1.add(2, 3, 5);

    return 0;
}
