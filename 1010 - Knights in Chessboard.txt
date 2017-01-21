#include<stdio.h>
int main()
{
    int T,n,i,m,ans;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d",&m,&n);
        if(m==1 || n==1){
            ans=m*n;
        }
        else if(m==2 && n==2){
            ans=4;
        }
         else if(m==3 && n==2 || m==2 && n==3 || m==2 && n==3){
            if(m>n){
                n=m;
                m=2;
            }
            ans=m*2;
         }
         else if(m==2 && n>=5 || n==2 && m>=5){
              if(m<n){
                m=n;
                n=2;
              }
              if(m%2==1){
                ans=m+1;
              }
            else if((m+2)%4==0){
                ans=m+2;
            }
            else if(m>n && (m+2)%4!=0){
                ans=m;
            }
            else if((m+2)%4!=0){
                ans=n;
            }

         }


        else{
            ans=(m*n+1)/2;
        }
        printf("Case %d: %d\n",i,ans);
    }

    return 0;


}
