#include<stdio.h>
int main()
{
    int i,j,k,m,T,sum;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    sum=0;
    scanf("%d",&j);
    for(m=0;m<j;m++){
    scanf("%d",&k);
    if(k>0){
    sum=sum+k;
    }
    }
     printf("Case %d: %d\n",i,sum);
}
    return 0;
 
}
 
