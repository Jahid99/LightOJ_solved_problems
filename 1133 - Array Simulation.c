#include<stdio.h>
#include<string.h>
int main()
{
    int ara[100],j,k,temp;
    char p;
    int i,m,n,u,t,x,y,z,T;
    scanf("%d",&T);
    for(u=1;u<=T;u++){
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        scanf("%d",&ara[i]);
    }
    for(k=0;k<n;k++){
    scanf(" %c",&p);
    if(p=='S'){
    scanf("%d",&j);
    getchar();
     for(x=0;x<m;x++){
        ara[x]=ara[x]+j;
     }
    }
    if(p=='M'){
        scanf("%d",&j);
        //getchar();
        for(y=0;y<m;y++){
            ara[y]=ara[y]*j;
        }
    }
 
    if(p=='D'){
        getchar();
        scanf("%d",&j);
        //getchar();
        for(y=0;y<m;y++){
            ara[y]=ara[y]/j;
        }
    }
    if(p=='R'){
        //getchar();
        for(i=m-1,j=0;j<(m/2);j++,i--){
            temp=ara[j];
            ara[j]=ara[i];
            ara[i]=temp;
        }
    }
    if(p=='P'){
        scanf("%d%d",&i,&j);
       // getchar();
        temp=ara[i];
        ara[i]=ara[j];
        ara[j]=temp;
    }
    }
    printf("Case %d:\n",u);
    for(k=0;k<m;k++){
        printf("%d%c",ara[k],k<m-1?' ':'\n');
    }
    }
    return 0;
}
 
