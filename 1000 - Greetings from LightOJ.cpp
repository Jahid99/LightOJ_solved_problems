#include<stdio.h>
int main()
{
    int T;
    int i,j,k,sum;
    scanf("%d",&T);
    for(k=0;k<T;k++){
    sum=0;
    scanf("%d%d",&i,&j);
    if(i<=10 && j<=10)
    {
        if(i<0){
            i=-i;
        }
        if(j<0)
        {
            j=-j;
        }
        sum=i+j;
    }
    printf("Case %d: %d\n",k+1,sum);
    }
    return 0;
}
