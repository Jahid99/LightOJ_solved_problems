#include<stdio.h>
int main()
{
    long long int ara[10000],T,i,j,n;
    scanf("%lld",&T);
    for(j=1;j<=T;j++){
    for(i=0;i<=5;i++){
        scanf("%lld",&ara[i]);
    }
     scanf("%lld",&n);
    for(i=6;i<=n;i++)
    {
        ara[i]=(ara[i-1]+ara[i-2]+ara[i-3]+ara[i-4]+ara[i-5]+ara[i-6])%10000007;
 
    }
 
    printf("Case %lld: %lld\n",j,ara[n]%10000007);
    }
}
