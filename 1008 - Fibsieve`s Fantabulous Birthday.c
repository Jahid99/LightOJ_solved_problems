#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,j,k,m,n,q,r,s,temp;
    int T,v;
    scanf("%d",&T);
    for(v=1;v<=T;v++){
    double x,y,z,p;
    scanf("%lld",&n);
    x=sqrt(n);
    i=ceil(x);
    p=i-.5;
    j=(i*(i-1))+1;
    k=j-n;
    if(k<0){
        k=-k;
    }
    m=i-k;
    if(i%2 != 0){
    if(n<j){
      temp=m;
      m=i;
      i=temp;
    printf("Case %d: %lld %lld\n",v,m,i);
    }
    else{printf("Case %d: %lld %lld\n",v,m,i);}
    }
    else{
        if(n>j){
      temp=m;
      m=i;
      i=temp;
    printf("Case %d: %lld %lld\n",v,m,i);
    }
    else{printf("Case %d: %lld %lld\n",v,m,i);}
    }
    }
    return 0;
}
 
