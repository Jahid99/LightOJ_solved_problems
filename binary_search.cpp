#include<iostream>
using namespace std;
const int size = 10;
int arr[size] = {11,14,15,18,22,28,31,38,39,42};
int count = 0;

int binary_search(int startIndex, int endIndex, int value)
{
    count++;
    int midIndex = (startIndex+endIndex)/2;

    if(arr[midIndex]==value)
    {
        return midIndex;
    }
    else
    {
        if(startIndex>=endIndex)
        {
            return -1;
        }
        else
        {
            if(value<arr[midIndex])
            {
                //cout<<"as value "<<value<<" < "<<"middleIndex "<<arr[midIndex]<<" start index "<<startIndex<<" last index "<<midIndex-1<<" mid index "<<(startIndex+(midIndex-1))/2<<" value "<<value<<endl;
                binary_search(startIndex,midIndex-1,value);
            }
            else
            {
                binary_search(midIndex+1,endIndex,value);
            }
        }
    }

}

int main()
{
    int result = binary_search(0,size-1,14);
    if(result<0)
    {
        cout<<" not found "<<count <<" times "<<endl;
    }
    else
    {
        cout<<" found at "<<result<<" index after "<<count<<" times "<<endl;
    }
    return 0;
}
