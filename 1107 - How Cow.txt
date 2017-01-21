#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,a1,b1,T,i,k,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    scanf("%d",&k);
    printf("Case %d:\n",i);
    for(j=0;j<k;j++){
    scanf("%d%d",&a1,&b1);
    if((a1>=x1 && x2>=a1) && (b1>=y1 && y2>=b1)){
        printf("Yes\n");
    }
    else{printf("No\n");}
    }
    }
    return 0;
}
