#include<iostream>
using namespace std;
typedef struct node
{
    int value;
    node *left,*right;
}node;
int mx(int a,int b)
{
    return (a>b)?a:b;
}
node *getNode(int value)
{
    node *nwNode=new node;
    nwNode->value=value;
    nwNode->left=NULL;
    nwNode->right=NULL;
    return nwNode;
}
int getHeight(node *root)
{
    if(root==NULL)
        return 0;
    int lh=getHeight(root->left);
    int rh=getHeight(root->right);
    return 1+mx(lh,rh);
}
node *createNode()
{
    node *root=getNode(8);
    root->left=getNode(3);
    root->right=getNode(10);
    root->left->left=getNode(1);
    root->left->right=getNode(6);
    root->right->right=getNode(14);
    root->left->right->left=getNode(4);
    root->left->right->right=getNode(7);
    root->right->right->left=getNode(13);
    return root;
}
int main()
{
    node *root=createNode();
    cout<<"Tree height is: "<<getHeight(root)<<endl;
    return 0;
}
