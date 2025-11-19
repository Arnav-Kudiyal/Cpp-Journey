/* Quadratic Equation Roots Finder*/

#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

int main()
{
    float a , b, c;
    cout << "Hey! This is a Quadratic Equation Roots Finder. Please Enter the Coefficient Carefully!!" << endl;
    cout << endl;

    cout << "Please Enter the Coefficient of x^2 " << endl;
    cin >> a;

    cout << "Please Enter the Coefficient of x " << endl;
    cin >> b;

    cout << "Please Enter the Constant Term " << endl;
    cin >> c;

    if(a == 0)
    {
        cout << "This is not a Quadratic Equation " << endl;
        return 0;
    }

    float power = pow(b ,2);   
    float middle = power - 4 * a * c;
    float squareRoot = sqrt(middle);
    float div = 2 * a;

    if(middle < 0)
    {
        cout << "This is a complex Number Roots will be imaginary" << endl;
        cout << endl;

        float realPart = -b / div;
        float imaginaryPart = -(middle);

        cout << "The Roots of given Quadratic equations are - " << endl;
        cout << endl;

        cout << "Root One = " << realPart << " + " << "SquareRoot of " << imaginaryPart << "i " << " / " << div << endl;
        cout << "Root Two = " << realPart << " - " << "SquareRoot of " << imaginaryPart << "i " << " / " << div << endl;

    }

    else
    {
        float rootOne = (-b + squareRoot) / div;
        float rootTwo = (-b - squareRoot) / div;

        cout << "The Roots of give Quadratic equations are - " << endl;
        cout << endl;
        cout << "Root One = " << rootOne << endl;
        cout << "Root Two = " << rootTwo << endl;

    }


    return 0;
}
