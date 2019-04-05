#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    struct Node *left,*right;
};
Node *newNode(int data)
{
    Node *temp=new Node;
    temp->key=data;
    temp->left=temp->right=NULL;
    return temp;
}
Node *insrt(Node *root,int key)
{
    if(root==NULL)
        return newNode(key);
    if(key<root->key)
        root->left=insrt(root->left,key);
    else if(key>root->key)
        root->right=insrt(root->right,key);
    return root;
}
void inorder(Node *root)
{
    if(root!=NULL)
    {
        //cout<<root->key<<" ";
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
        //cout<<root->key<<" ";
    }
}
int main()
{
    struct Node *root=NULL;
    root=insrt(root,50);
    insrt(root,30);
    insrt(root,20);
    //new node insertion
    insrt(root,40);
    insrt(root,70);
    insrt(root,60);
    insrt(root,80);

    inorder(root);
    cout<<endl;
}
