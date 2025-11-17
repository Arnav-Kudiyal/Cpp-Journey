// Program to returning object from function
#include<iostream>
#include<string>
using namespace std;

class Details
{
public:
    int value;

    void Input()
    {
        cout << "Enter the Number " << endl;
        cin >> value;
    }

};

Details add(Details x, Details y)
{
    Details temp;
     
    temp.value = x.value + y.value;
    
    return temp;

}


int main()
{
    Details result;
    Details a;
    Details b;
    
    a.Input();
    b.Input();

    result = add(a, b);
    cout << result.value << endl;
    


    return 0;
}
