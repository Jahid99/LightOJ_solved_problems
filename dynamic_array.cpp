#include<iostream>
using namespace std;
int main()
{
    int value;
    int *arr,sum = 0;
    cout<<"Enter Match Number ";
    cin>>value;
    arr=new int[value];
    for(int i=0; i<value; i++)
    {
        cout<<"Match Number"<<(i+1)<<" Goal scored"<<"";
        cin>>*(arr+i);
        sum=sum+*(arr+i);
    }
    cout<<" Goal scored in "<<value<<" sum is"<<sum<<endl;
}
