#include <iostream>
#include <stdlib.h>

using namespace std;

struct node{
int data;
node* lchild;
node* rchild;
};

node* create_node(int data)
{
    node* temp=new node;
    temp->data=data;
    temp->lchild=temp->rchild=NULL;
    return temp;
}

node* create(node* root, int data)
{
    if(root==NULL)
    {
        root = create_node(data);
        return root;
    }
    else
    {
        if (data<root->data)
        {
            root->lchild = create(root->lchild,data);
        }
        else
        {
            root->rchild=create(root->rchild, data);
        }
        return root;
    }
}
static int i=0;
void tree_sort(node* root, int arr[])
{
    if (root==NULL)
    {
        return;
    }
    tree_sort(root->lchild, arr);

    arr[i]=root->data;
    i++;


    tree_sort(root->rchild, arr);
}

int main()
{
    node* root=NULL;
    int arr[10]={1,3,2,5,7,8,4,2,10,9};
    cout<<"Original Array: ";
    for (int j=0;j<10;j++)
    {
        cout<<arr[j]<< " ";
        root=create(root, arr[j]);
    }
    tree_sort(root,arr);
    i=0;
    cout<<"\nSorted Array: ";
    for (int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
