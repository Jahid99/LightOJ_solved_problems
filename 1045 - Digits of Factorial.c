#include<stdio.h>
#include<math.h>
int test,p,i,n,j,k,b;
double f[1000010];
int main()
{
for(i=1;i<=1000000;i++){
f[i]=log((i))+f[i-1];
}
scanf("%d",&test);
for(j=1;j<=test;j++){
scanf("%d%d",&n,&p);
b=f[n]/log(p);
printf("Case %d: %d\n",j,b+1);
}
return 0;
}
 
