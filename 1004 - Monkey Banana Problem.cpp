#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ara[500][500]={0},l,P=0,S=0;
    int T,b,n,i,j;
    scanf("%d",&T);
    for(b=1;b<=T;b++)
    {
 
    S=0;P=0;
    scanf("%d",&n);
    for(i=0;i<n;)
    {
        for(j=0;j<=i;j++)
        {
            scanf("%lld",&ara[i][j]);
        }
        i++;
    }
   /* printf("%d\n",ara[0][0]);
    printf("%d\n",ara[1][0]);
    printf("%d\n",ara[1][1]);
    printf("%d\n",ara[1][2]);
    printf("%d\n",ara[2][0]);*/
     for(i=0;i<(n);)
    {
 
        for(j=0;j<=i;j++)
        {
            if(j==0 || (i-j)==0){
            if(j==0){
                P=P+ara[i][j];
                ara[i][j]=P;
            }
            if((i-j)==0)
            {
                S=S+ara[i][j];
                ara[i][j]=S;
            }
            }
          else{
                ara[i][j]= max(((ara[i-1][j-1])+(ara[i][j])),((ara[i-1][j])+(ara[i][j])));
            }
 
        }
        i++;
       // P=0;
    }
 
   /*  printf("%d\n",ara[3][0]);
    printf("%d\n",ara[3][1]);
    printf("%d\n",ara[3][2]);
    printf("%d\n",ara[3][3]);*/
 
    for(i=(n-2);i>=0;)
    {
        for(j=0;j<=i;j++)
        {
            scanf("%lld",&ara[i][j]);
        }
        i--;
    }
 
     P=0;
     S=0;
 
     for(i=0;i<(n);)
    {
 
        for(j=0;j<=i;j++)
        {
            if(j==0 || (i-j)==0){
            if(j==0){
                P=P+ara[i][j];
                ara[i][j]=P;
            }
            if((i-j)==0)
            {
                S=S+ara[i][j];
                ara[i][j]=S;
            }
            }
          else{
                ara[i][j]= max(((ara[i-1][j-1])+(ara[i][j])),((ara[i-1][j])+(ara[i][j])));
            }
 
        }
        i++;
       // P=0;
    }
 
   /* printf("%d\n",ara[3][0]);
    printf("%d\n",ara[3][1]);
    printf("%d\n",ara[3][2]);
    printf("%d\n",ara[3][3]);*/
    l=ara[n-1][0];
    for(i=0;i<=(n-1);i++){
        if(ara[n-1][i]>=l)
            l=ara[n-1][i];
    }
    printf("Case %d: %lld\n",b,l);
    }
   // printf("%d\n",ara[2][0]);
 
    return 0;
}
 
