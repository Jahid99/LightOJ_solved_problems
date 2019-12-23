#include<iostream>
using namespace std;
int top=-1;
int *arr;
int size;

void push(int value)
{
    if(top<size-1){
        top++;
        arr[top]=value;
    }else{
        cout<<"Cannot push stack is already full";
    }
}

void pop()
{

    if(top>=0){
      top--;
    }else{
        cout<<"Cannot pop the stack is empty";
    }
}

void print()
{
    cout<<"current stack"<<" ";
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"Enter the stack size"<<endl;
    cin>>size;
    arr = new int[size];

    push(5);
    print();
    push(4);
    print();
    push(3);
    print();
    push(2);
    print();
    push(1);
    print();
    pop();
    print();
    push(100);
    print();
}
