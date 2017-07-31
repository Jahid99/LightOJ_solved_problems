#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[206];
    int i,j,k,l;
    long n;
    long long sum;
    scanf("%d",&j);
    for(l=1;l<=j;l++){
    sum=0;
    scanf("%s%ld",str,&n);
    if(n<0){
        n=-n;
    }
    k=strlen(str);
    for(i=0;i<k;i++){
 
        if(str[i]=='-'){
            continue;
        }
        sum=sum+(str[i]-'0');
        if(sum>=n){
            sum=sum%n;
        }
        if(sum<n && i!=k-1){
            sum=sum*10;
        }
 
    }
    if(sum==0){
        printf("Case %d: divisible\n",l);
    }
    else{
        printf("Case %d: not divisible\n",l);
    }
    }
 
    return 0;
}
