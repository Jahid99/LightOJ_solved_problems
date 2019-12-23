#include<iostream>
using namespace std;
int main()
{
    int *p1;
    int v1=10;
    p1 = &v1;
    int **p2;
    p2=&p1;
    cout<<*p1<<endl;
    cout<<**p2<<endl;
}
