#include<iostream>
using namespace std;
int global=8014;
int xchange(int *& ptr2)
{
    ptr2=&global;
}
int main()
{
    int local=46;
    int *ptr1=&local;
    cout << "\n" << *ptr1<<endl;
    xchange(ptr1);
    cout << "\n" << *ptr1<<endl;
}
