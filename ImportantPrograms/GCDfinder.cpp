/* Program to find GCD of two numbers using Euclid Algorithm*/

#include<iostream>
using namespace std;

int gcd(int quotient, int divisor)
{
     
    while(divisor != 0)
    {
        int remainder = 1;
        remainder = quotient % divisor;
        quotient = divisor;
        divisor = remainder;
    }
    return quotient;


}

int main()
{
    int num1, num2;
    
    cout << "Please Enter the First number" <<endl;
    cin >> num1;

    cout << "Please Enter the Second number" <<endl;
    cin >> num2;
    
   

    cout << "The gcd of"<<" " << num1 <<" " << "&" << " "<< num2 <<" "<< "is" << " " << gcd(num1, num2) <<endl;




    return 0;
}
