/* In this code we are calculating the intrest as a shopkeeper of coustomers*/

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Shop
{
private:
    int age;

public:
    string Name;
    int lendAmount;
    int dueDays;
    
    double intrestCalculate()
    {
        int intrest;
        if(dueDays<=30)
        {
            cout<<"You don't fall under the intrest bracket right now.Thankyou for shopping"<<endl;
        }
        else
        {
            float givenIntrest = 1.5;

            float r = 1+(givenIntrest/100);
            
            r = pow(r, givenIntrest);

            intrest = lendAmount*(r);

             return intrest;


        }

       
    }
        
};

int main()
{
    Shop coustmer1;
    coustmer1.Name = "testPerson1";
    coustmer1.lendAmount = 30000;
    coustmer1.dueDays = 35;
    
    cout<<coustmer1.intrestCalculate()<<endl;

    
    return 0;
}
