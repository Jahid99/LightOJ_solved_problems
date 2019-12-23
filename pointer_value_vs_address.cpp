#include<iostream>
using namespace std;
int main()
{
    int v1,v2;
    v1=10;v2=15;
    int *p1,*p2;
    p1 = &v1;
    p2 = &v2;
    p1=p2;
    cout<<*p1<<endl;
    cout<<p1<<endl;
    cout<<*p2<<endl;
    cout<<p2<<endl;
}
