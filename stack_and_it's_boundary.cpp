#include<iostream>
using namespace std;
int arr[3];
int top = -1;

void push(int value)
{
    if(top<3-1){
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

}
