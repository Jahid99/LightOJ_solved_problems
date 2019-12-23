#include<iostream>
using namespace std;
int main()
{
    int temp;
    int arr[5]={75,13,55,74,51};
    cout<<"array before sorting ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

}
