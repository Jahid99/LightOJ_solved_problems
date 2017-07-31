#include<bits/stdc++.h>
using namespace std;
int rr[]={1 ,1 ,2 ,2 ,-1 ,-1 ,-2 ,-2};
int cc[]={2 ,-2 ,1 ,-1 ,2 ,-2 ,1 ,-1};
int R,C;
int grid[12][12];
int dis[12][12];
int flag[12][12];
vector<pair<int,int> >vSto;
void dfs(int r,int c,int rem)
{
    queue<int>Q;
    memset(flag,0,sizeof(flag));
    Q.push(r);Q.push(c);
    while(!Q.empty())
    {
        int nr=Q.front();Q.pop();
        int nc=Q.front();Q.pop();
        for(int i=0;i<8;i++)
        {
         int nxtr=nr+rr[i],nxtc=nc+cc[i];
         if(nxtr>=0 && nxtr<R && nxtc>=0 && nxtc<C && flag[nr][nc]+1<=rem && flag[nxtr][nxtc]==0)
         {
             flag[nxtr][nxtc]=flag[nr][nc]+1;
             Q.push(nxtr);Q.push(nxtc);
             vSto.push_back(make_pair(nxtr,nxtc));
         }
        }
    }
    return;
}
void bfs(int row,int col,int k)
{
      int tmpDis[12][12];
      memset(tmpDis,-1,sizeof(tmpDis));
      tmpDis[row][col]=0;
      queue<int>Q;
      Q.push(row);Q.push(col);
      while(!Q.empty())
      {
          int r=Q.front();Q.pop();
          int c=Q.front();Q.pop();
          vSto.clear();
          dfs(r,c,k);
          for(int i=0;i<vSto.size();i++){
          int nr=vSto[i].first,nc=vSto[i].second;
          if(tmpDis[nr][nc]==-1)
          {
              tmpDis[nr][nc]=tmpDis[r][c]+1;
              Q.push(nr);Q.push(nc);
          }
          }
      }
      for(int i=0;i<R;i++)
      {
          for(int j=0;j<C;j++)
          {
              if(dis[i][j]==-1 || tmpDis[i][j]==-1)
              {
                  dis[i][j]=-1;
              }
              else{
                dis[i][j]+=tmpDis[i][j];
              }
          }
      }
      return;
}
int main()
{
    int tcase,cas=1;
    scanf("%d",&tcase);
    while(tcase--){
      scanf("%d%d",&R,&C);
      memset(dis,0,sizeof(dis));
      memset(grid,'\0',sizeof(grid));
      memset(flag,0,sizeof(flag));
      for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            scanf(" %c",&grid[i][j]);
        }
      }
      for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(grid[i][j]>='1' && grid[i][j]<='9'){
                bfs(i,j,grid[i][j]-'0');
            }
        }
      }
      int min_val=(1<<30);
      for(int i=0;i<R;i++)
      {
          for(int j=0;j<C;j++)
          {
              if(dis[i][j]!=-1)
              {
                  min_val=min(min_val,dis[i][j]);
              }
          }
      }
      if(min_val>= (1<<30)){
        min_val=-1;
      }
      printf("Case %d: %d\n",cas++,min_val);
    }
 
    return 0;
}
 
