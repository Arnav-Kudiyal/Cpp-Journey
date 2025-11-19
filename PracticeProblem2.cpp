/*Find the Character lowercase or uppercase*/

#include<iostream>
using namespace std;

int main()
{
    char alpha;

    cout<<"Please enter your character"<<endl;
    cin>>alpha;

    if(alpha>='a' && alpha<='z')
    {
        cout<<"Lowercase"<<endl;
    }
    else if(alpha>='A'  && alpha<='Z')
    {
        cout<<"Uppercase"<<endl;
    }
    else
    {
        cout<<"Please only enter a alphabatical character"<<endl;
    }

    return 0;
}
