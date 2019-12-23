#include<iostream>
using namespace std;
int size=1;
int *arr = new int[1];
int top=-1;

void resize()
{
    cout<<"old size "<<size<<endl;
    int *newarr=new int[size*2];
    for(int i=0;i<=top;i++){
        newarr[i]=arr[i];
    }
    size = size*2;
    cout<<"After reszing the stack is "<<size<<endl;
    delete[] arr;
    arr=newarr;
}



void push(int value)
{
    if(top<size-1){
        top++;
        arr[top]=value;
    }else{
        cout<<"Stack is full, Stack resizing"<<endl;
        resize();
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
    cout<<"current stack "<<" ";
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{


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
