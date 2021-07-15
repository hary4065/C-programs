#include<iostream>
using namespace std;
int global=2424;
int& change()
{
    return global ;
}
int main()
{
    int x=5457;
    int *ptr=&x;
    cout<<*ptr<<endl;
    ptr= & change();
    cout<<*ptr<<endl;
}
