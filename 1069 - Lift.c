#include<stdio.h>
int main()
{
    int a,b,c,d,e,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%d%d",&a,&b);
    c=abs(a-b);
    d=c+a;
    e=(d*4)+19;
    printf("Case %d: %d\n",i,e);
    }
    return 0;
}
