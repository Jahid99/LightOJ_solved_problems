#include<stdio.h>
int main()
{
    long long int a,i,test,even,odd;
    scanf("%lld",&test);
    for(i=1;i<=test;i++){
        scanf("%lld",&a);
        even=1;
        while(a){
        if((a&1)==0){
            even=even<<1;
            a=a>>1;
            if(a&1){
                printf("Case %lld: %lld %lld\n",i,a,even);
                break;
            }
        }
        else{
            printf("Case %lld: Impossible\n",i);
            break;
        }
        }
    }
}
 
