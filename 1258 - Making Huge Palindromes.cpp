#include<bits/stdc++.h>
using namespace std;
char str[1100000];
char substr[1100000];
int b[1100000];
 
void kmpPreprocess(char *substr)
{
    const int m = strlen(substr);
    int i = 0, j = -1;
 
    b[i] = -1;
    while(i < m)
    {
        while(j >= 0 && substr[i] != substr[j])
            j = b[j];
 
        i++;
        j++;
        b[i] = j;
    }
}
 
int kmp(char *str, char *substr)
{
    int i=0, j=0, count,l=0;
    const int n = strlen(str);
    const int m = strlen(substr);
 
    kmpPreprocess(substr);
    while (i<n)
    {
        if(substr[i]==str[i]){
        l++;
    }
        while (j>=0 && str[i]!=substr[j])
            j=b[j];
 
        i++;
        j++;
 
        if (j==m)
        {
            count++;
            j=b[j];
        }
    }
    if(l==m){
    return l;
}
else{
i=i*2;
i=i-j;
return i;
}
}
 
int main()
{
    int tc, i,len;
 
    cin>>tc;
    getchar();
    for(i = 0; i <tc; i++)
    {
        gets(str);
        len=strlen(str);
        reverse_copy(str,str+len,substr);
        printf("Case %d: %d\n", i + 1, kmp(str, substr));
    }
 
    return 0;
}
 
