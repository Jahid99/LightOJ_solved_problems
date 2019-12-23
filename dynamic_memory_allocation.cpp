#include<iostream>
using namespace std;

int main()
{
    int *p;
    {
        int x=7;
        p=new int(10);
        cout<<*p<<" "<<p<<" "<<x<<endl;
    }
    //cout<<x<<endl;
    cout<<*p<<endl;
    delete p;
    cout<<*p<<" "<<p<<endl;
}
