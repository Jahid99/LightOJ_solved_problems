#include<bits/stdc++.h>
using namespace std;
#define SIZE 20005
list<int>adj[SIZE];
int color[SIZE];
enum{NOT_VISITED,BLACK,RED};
int main()
{
    int tc,t,i,j,k,x,y,mx,n,node;
    scanf("%d",&tc);
    for(t=1;t<=tc;t++){
        scanf("%d",&n);
        memset(color,0,sizeof color);
        for(i=0;i<SIZE;i++){
            adj[i].clear();
        }
        for(i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        mx=0;
        for(i=0;i<SIZE;i++){
            if(!adj[i].empty() && color[i]==NOT_VISITED){
                int black=0,red=0;
                queue<int>q;
                q.push(i);
                color[i]=BLACK;
                black++;
                while(!q.empty()){
                    node=q.front();
                    q.pop();
                   for(list<int>::iterator it = adj[node].begin(); it != adj[node].end(); it++)
                    {
                        //cout<<" it "<<*it<<endl;
 
                        if(color[*it] == NOT_VISITED)
                        {
                            q.push(*it);
                            if(color[node] == BLACK)
                            {
                                //cout<<"color[node]"<<color[node]<<endl;
                                color[*it] = RED;
                                red++;
                            }
                            else
                            {
                                color[*it] = BLACK;
                                black++;
                            }
                        }
                    }
                }
 
                mx+=max(black,red);
            }
        }
        printf("Case %d: %d\n", t, mx);
    }
    return 0;
}
 
