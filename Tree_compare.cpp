#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left,*right;
};
Node *newNode(int data)
{
    Node *node=new Node;
    node->data=data;
    node->left=node->right=NULL;
    return node;
}
void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int isCompare(Node *root1,Node *root2)
{
    if(root1==NULL && root2==NULL)
        return 1;
    else if(root1!=NULL && root2==NULL)
        return 0;
    else if(root1==NULL && root2!=NULL)
        return 0;
    else{
        if(root1->data==root2->data && isCompare(root1->left,root2->left) && isCompare(root1->right,root2->right))
            return 1;
        else
            return 0;
    }
}
int main()
{
    struct Node *root1,*root2;
    //Tree 1
    root1=newNode(5);
    root1->left=newNode(3);
    root1->left->left=newNode(2);
    root1->left->right=newNode(4);
    root1->right=newNode(8);
    //Tree 2
    root2=newNode(5);
    root2->left=newNode(3);
    root2->left->left=newNode(2);
    root2->left->right=newNode(4);
    root2->right=newNode(8);

    if(isCompare(root1,root2))
        cout<<"Both tree are same identical"<<endl;
    else
        cout<<"Both tree are not same identical"<<endl;
    return 0;
}
