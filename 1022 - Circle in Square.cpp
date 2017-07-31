#include<stdio.h>
int main()
{
    double r,i,j,pi = 2 * acos (0.0);
    int T,m;

    scanf("%d",&T);
    for(m=1;m<=T;m++){
    scanf("%lf",&r);
    i=(2*r)*(2*r);
    j=(pi)*(r*r);
    printf("Case %d: %.2lf\n",m,i-j);
    }
    return 0;
}
