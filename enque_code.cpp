#include<iostream>
using namespace std;
const int size=5;
int queue[size],front=0,rear=0;

void enque(int value)
{
    if(rear==size)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        cout<<value<<" added"<<endl;
        queue[rear]=value;
    }
    rear++;
}

void deque(int value)
{
    if(front==rear){
        cout<<" Queue is empty"<<endl;
    }else{
        front = front+1;
        cout<<"\n"<<value<<" removed from queue"<<endl;
    }
}

void display()
{
    int temp;
    temp = front;
    if(front==rear)
    {
        cout<<"The queue is empty"<<endl;
    }
    else
    {
        cout<<"\nElement is in current queue ";
        for(int i=temp;i<rear;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    enque(5);
    display();
    enque(6);
    display();
    enque(7);
    display();
    deque(5);
    display();

}
