#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char my_char='a';
    //char my_string[]='my name is jahid';
    char my_string[] = "my name is jahid";
    my_string[6]='\0';
    int length = strlen(my_string);
    for(int i=0;i<length;i++)
    {
        if(my_string[i]==my_char){
            cout<<i<<endl;
        }
    }
}
