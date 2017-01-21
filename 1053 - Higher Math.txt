#include<stdio.h>
int main()
{
    long int a,b,c,p,q;
    int T,i,Temp;

    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%d%d%d",&a,&b,&c);
    if(a>c && a>b){
        Temp=a;
        a=c;
        c=Temp;
    }
     else if(b>c && b>a){
        Temp=b;
        b=c;
        c=Temp;
    }
    p=a*a+b*b;
    q=c*c;
    if(p==q){
        printf("Case %d: yes\n",i);
    }
    else{printf("Case %d: no\n",i);}
    }
    return 0;
}
