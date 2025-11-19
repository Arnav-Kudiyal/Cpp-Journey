//Program passing array to a function
#include<iostream>
using namespace std;

void printarray(int a[], int size)
{
    for(int i = 0; i <size; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    printarray(array, 10);


    return 0;
}
