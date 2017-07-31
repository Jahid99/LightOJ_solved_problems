#include<stdio.h>
#include<math.h>
int main()
{
    double r1,r2,h,p;
    double r,x,y,z,l;
    int i,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);
    y=2*acos(0.0);
    x=(h*r2)/(r1-r2);
    r=r2+(p*(r1-r2))/h;
    z=(y*pow(r,2)*(p+x))/3;
    l=(y*pow(r2,2)*x)/3;
    printf("Case %d: %lf\n",i,z-l);
    }
}
 
