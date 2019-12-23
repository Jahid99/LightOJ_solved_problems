#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left=NULL;
    Node* right=NULL;
};
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
                if(tptr->left==NULL)
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
                if(tptr->right== NULL)
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

void print(Node* node)
{
    if(node!=NULL)
    {
        print(node->left);
        cout<<node->data<<" ";
        print(node->right);
    }
}

void Search(int value)
{
    Node* tptr=Root;
    while(true)
    {
        if(tptr==NULL || tptr->data==value)
        {
            break;
        }
        else
        {
            if(tptr->data>value)
            {
                tptr = tptr->left;
            }
            else
            {
                tptr = tptr->right;
            }
        }
    }
    if(tptr==NULL)
    {
        cout<<value<<" Not Found"<<endl;
    }
    else
    {
        cout<<value<<" Found"<<endl;
    }
}

int main()
{
    Add(50);
    Add(15);
    Add(75);
    Add(81);
    Add(77);
    Add(30);
    Add(64);
    Add(99);
    Add(18);
    Add(3);
    Add(35);
    print(Root);
    cout<<endl;
    cout<<"Searching... "<<endl;
    Search(99);
}
