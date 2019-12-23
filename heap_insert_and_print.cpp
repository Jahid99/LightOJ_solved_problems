#include<iostream>
using namespace std;

const int size = 5;
int arr[5];
int count=0;

void Adjust_from_bottom(int startIndex,int endIndex)
{
    int item=arr[count];
    int i = count;
    while(i/2>=1)
    {
        if(arr[i/2]<item)
        {
            arr[i]=arr[i/2];
            i=i/2;
        }
        else
        {
            break;
        }
        arr[i]=item;
    }
}
void Adjust_from_top(int startIndex, int endIndex)
{
    int item= arr[startIndex];
    int i=startIndex*2;
    while(i<=endIndex)
    {
        if(i+1<=endIndex && arr[i+1]>arr[i])
        {
            i=i+1;
        }
        else if(item>=arr[i])
        {
            break;
        }
        else
        {
            arr[i/2]=arr[i];
            i=i*2;
        }
    }
    arr[i/2]=item;
}


void Remove()
{
    if(count>0)
    {
        arr[1]=arr[count];
        count--;
        Adjust_from_top(1,count);
    }else
    {
        cout<<"Heap is empty "<<endl;
    }
}



void Insert(int value)
{
    if(count<size-1)
    {
        count++;
        arr[count]=value;
        Adjust_from_bottom(count,1);
    }
    else
    {
        cout<<"Heap is Full !!"<<endl;
    }
}


void print()
{
    cout<<"Heap : ";
    for(int i=1;i<=count;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void HeapSort()
{
    for(int i=count;i>1;i--)
    {
        int t=arr[i];
        arr[i]=arr[1];
        arr[1]=t;
        Adjust_from_top(1,i-1);
    }
}

int main()
{
    Insert(50);

    Insert(10);
    Insert(100);
    Insert(30);
    Remove();
    print();
    HeapSort();
}
