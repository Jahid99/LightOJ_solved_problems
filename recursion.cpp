#include<iostream>
using namespace std;
int sum=1;
void recursion(int value)
{
    if(value>0)
    {
        sum=sum*value;
        cout<<sum<<endl;
        recursion(value-1);
    }
}

int main()
{
    recursion(5);
}
