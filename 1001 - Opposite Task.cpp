#include<stdio.h>
int main()
{
    int a,b,u,i,j,T,ara[50]={0};
    scanf("%d",&T);
    for(i=0;i<T;i++){
    scanf("%d",&b);
    if(b==0){
    printf("0 0\n");
    }
    else if(b==20){
        printf("10 10\n");
    }
    else if(b<11){
        printf("%d %d\n",ara[b],b-ara[b]);
        ara[b]++;
    }
    else{
        u=10-ara[b];
        printf("%d %d\n",u,abs(u-b));
        ara[b]++;
    }
    }
    return 0;
}

VOLUME
Volume Home
Problem Set
Problem Category
Problem Setters
Submit Problem
My Submissions
Judge Status
Ranklist
User Statistics
Compare User Statistics
 
