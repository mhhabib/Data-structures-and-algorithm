#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left,*right;
};
bool isBst(Node *root, Node *l=NULL,Node *r=NULL)
{
    if(root==NULL)
        return true;
    if(l!=NULL and root->data<l->data)
        return false;
    if(r!=NULL and root->data>r->data)
        return false;
   return (root->data,l,root) and (root->data,root,r);
}
Node *newNode(int data)
{
    Node *temp=new Node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
int main()
{
    struct Node *root=newNode(3);
    root->left=newNode(2);
    root->right=newNode(5);
    root->left->left=newNode(1);
    root->left->right=newNode(4);
    if(isBst(root,NULL,NULL))
        cout<<"Wow it is BST!!"<<endl;
    else
        cout<<"Sorry it's not BST!!"<<endl;
    return 0;
}
