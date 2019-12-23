#include<iostream>
using namespace std;
const int size=5;
int arr[size];
int front=1;
int rear = 1;
void enque(int value)
{
    int next_rear=(rear+1)%size;
    cout<<" next rear "<<next_rear<<endl;
    if(next_rear==front)
    {
        cout<<" queue is full "<<endl;
    }
    else
    {
        arr[rear]=value;
        cout<<" rear "<<rear<<endl;
        rear = next_rear;
    }
}

void deque(int value)
{
    if(front==rear){
        cout<<" Queue is empty"<<endl;
    }else{
        front = (front+1)%size;
        cout<<"front "<<front<<endl;
    }
}

void print()
{
    cout<<"Current Queue: ";
    for(int i = front;i != rear; i=(i+1)%size)
    {
        cout<< arr[i] <<endl;
    }
    cout<<endl;
}

int main()
{
    enque(5);
    print();
    deque(5);
    print();
}
