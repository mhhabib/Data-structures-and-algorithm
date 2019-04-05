#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
/*
bool isNod(struct Node *node,int key)
{
    if(node==NULL)
        return false;
    if(node->data==key)
        return true;
    bool res=isNod(node->left,key);
    bool res2=isNod(node->right,key);
    return res||res2;
}*/
bool isNod(struct Node *node,int key)
{
    if(node==NULL)
        return false;
    if(node->data==key)
        return true;
    if(node->data<key)
        return isNod(node->right,key);
    return isNod(node->left,key);
}
int main()
{
    struct Node *root=new Node(8);
    root->left=new Node(3);
    root->left->left=new Node(1);
    root->left->right=new Node(6);
    root->left->right->left=new Node(4);
    root->left->right->right=new Node(7);
    root->right=new Node(10);
    root->right->right=new Node(14);
    root->right->right->left=new Node(13);
    int key;
    cin>>key;
    if(isNod(root,key)==true)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}

