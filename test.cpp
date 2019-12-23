#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left=NULL;
    Node* right=NULL;
}
Node* Root=NULL;

void Add(int value)
{
    Node* nptr=new Node;
    nptr->data=value;
    nptr->left=NULL;
    nptr->right=NULL;

    if(Root==NULL)
    {
        Root=nptr;
    }
    else
    {
        Node * tptr=Root;
        while(true)
        {
            if(tptr->data>value)
            {
                if(tptr->left=NULL)
                {
                    tptr->left=nptr;
                    break;
                }
                else
                {
                    tptr = tptr->left;
                }
            }
            else
            {
                if(tptr->right=NULL)
                {
                    tptr->right=nptr;
                    break;
                }
                else
                {
                    tptr = tptr->right;
                }
            }

        }
    }


}

void print()
{
    if(node!=NULL)
    {
        print(node->left);
        cout<<node->data<<" ";
        print(node->right);
    }
}

int main()
{
    Add(50);
    Add(15);
    Add(75);
    Add(87);
    Add(77);
    Add(30);
    Add(64);
    Add(99);
    Add(18);
    Add(3);
    Add(35);
}
