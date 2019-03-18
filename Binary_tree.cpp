#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int key;
    node *left,*right;
}node;
node *getNode(int value)
{
    node *nwNode=new node;
    nwNode->key=value;
    nwNode->left=NULL;
    nwNode->right=NULL;
    return nwNode;
}
void inorder(struct node* root)
{
    if(root!=NULL)
    {
     inorder(root->left);
     printf("%d ",root->key);
     inorder(root->right);
    }
}
void preorder(struct node *root) {
   if (root != NULL) {
      cout<<root->key<<" ";
      preorder(root->left);
      preorder(root->right);
   }
}
void postorder(struct node *root) {
   if (root != NULL) {
      postorder(root->left);
      postorder(root->right);
      cout<<root->key<<" ";
   }
}
struct node* insrt(struct node* node,int key)
{
    if(node==NULL)
        return getNode(key);
    else if(key<node->key)
        node->left=insrt(node->left,key);
    else if(key>node->key)
        node->right=insrt(node->right,key);
    return node;
};
int main()
{
    struct node *root = NULL;
    root = insrt(root, 50);
    insrt(root, 30);
    insrt(root, 20);
    insrt(root, 40);
    insrt(root, 70);
    insrt(root, 60);
    insrt(root, 80);
    cout<<"Inorder travarse: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder travarse: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder travarse: ";
    postorder(root);
    cout<<endl;
    return 0;
}
