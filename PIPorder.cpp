#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left,*right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
void print_pre(struct Node *node)
{
    if(node==NULL)
        return;
    cout<<node->data<<" ";
    print_pre(node->left);
    print_pre(node->right);
}
void print_in(struct Node *node)
{
    if(node==NULL)
        return;
    print_pre(node->left);
    cout<<node->data<<" ";
    print_pre(node->right);
}
void print_post(struct Node *node)
{
    if(node==NULL)
        return;
    print_pre(node->left);
    cout<<node->data<<" ";
    print_pre(node->right);
}
int main()
{
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    cout<<"Pre-order traverse: ";
    print_pre(root);
    cout<<endl;
    cout<<"In-order traverse: ";
    print_in(root);
    cout<<endl;
    cout<<"Post-order traverse: ";
    print_post(root);
    cout<<endl;
    return 0;
}
