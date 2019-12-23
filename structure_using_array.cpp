#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    struct player
    {
        char name[10];
        char club[15];
        int kit_num;
    };

    player p[2];

    cin>>p[0].name;
    cin>>p[1].club;

    cout<<p[0].name;
    cout<<p[1].club;

    for(int i=0;i<3;i++){
        static int k=1;
        cout<<k<<endl;
        k++;
    }

}
