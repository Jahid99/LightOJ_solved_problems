#include<stdio.h>
int main()
{
    int T,i;
    long long int x,y;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%lld%lld",&x,&y);
    x=(x/2)*y;
    printf("Case %d: %lld\n",i,x);
    }
    return 0;
}
