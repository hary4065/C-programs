#include<iostream>
using namespace std;
int main()
{
    int m[2][3][4]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    cout << (sizeof m )/( sizeof m[0] )<<"\n"<<endl;
    cout << (sizeof m[0] )/(sizeof m[0][0] )<<"\n"<<endl;
    cout <<(sizeof m[0][0] )/(sizeof m[0][0][0] )<<"\n"<<endl;
    return 0;
}
