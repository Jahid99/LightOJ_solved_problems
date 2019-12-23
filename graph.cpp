#include<iostream>
using namespace std;
int main()
{
    const int size=5;
    int graph[size][size]={0};
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<" Enter edge numbers ";
    int e;
    cin>>e;

    for(int a=0;a<e;a++)
    {
        int from;
        cout<<"from ";
        cin>>from;
        int to;
        cout<<"to ";
        cin>>to;
        graph[from-1][to-1];
    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

   cout<<"Enter value for neighbor "<<endl;
   int n;
   cin>>n;
   for(int i=0;i<size;i++)
   {
       if(graph[n-1][i]==1)
       {
           cout<<n<<" --> "<<i+1<<endl;
       }
   }


}
