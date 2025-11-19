/*This a For loop problem by HackerRank The problem is - Given two
numbers a and b, print each number from a to b. If the number is 1–9, print its English word,
otherwise print "even" for even numbers and "odd" for odd numbers.*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i;
    string number[10]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    
    for(i=a;i<=b;i++)
    {
        if (i>=1 && i<=9)
        {
        cout<<number[i-1]<<endl;
        }
        else if (i%2==0)
        {
        cout<<"even"<<endl;
        }
        else 
        {
        cout<<"odd"<<endl;
        }
    
    }
    return 0;
}
