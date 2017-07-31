#include<stdio.h>
int main()
{
    int x[6],i,j,n,m,k,T,l;
    scanf("%d",&T);
    for(l=1;l<=T;l++){
    x[0]=x[1]=x[2]=1;
    x[3]=x[4]=x[5]=1000;
    scanf("%d",&n);
    for(j=0;j<n;j++){
    for(i=0;i<3;i++){
        scanf("%d",&m);
        if(m>x[i]){
            x[i]=m;
        }
    }
    for(i=3;i<=5;i++){
        scanf("%d",&m);
        if(m<x[i]){
            x[i]=m;
        }
    }
    }
    if(x[3]>x[0] && x[4]>x[1] && x[5]>x[2]){
    k=((x[3]-x[0])*(x[4]-x[1])*(x[5]-x[2]));
    printf("Case %d: %d\n",l,k);
    }
    else{
        printf("Case %d: 0\n",l);
    }
    }
    return 0;
}
 
