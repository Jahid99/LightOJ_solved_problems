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

    player p1;
    cin>>p1.name;
    cin>>p1.club;
    cin>>p1.kit_num;

    cout<<p1.name<<" "<<p1.club<<" "<<p1.kit_num<<" "<<endl;

    struct player p2={"Ronaldo","Real",7};

    cout<<p2.name<<" "<<p2.club<<" "<<p2.kit_num<<" "<<endl;

    strcpy(p2.name,p1.name);

    cout<<p1.name<<" "<<p1.club<<" "<<p1.kit_num<<" "<<endl;

}
