#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node* head=NULL,*tail=NULL;
void createnode(int new_data)
{
    struct Node* new_node=new Node;
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}
void display()
{
    struct Node* ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<< ptr->data <<" ";
        ptr=ptr->next;
    }
}
int main()
{
    createnode(3);
    createnode(1);
    createnode(7);
    createnode(2);
    createnode(9);
    cout<<"The linked list is: ";
    display();
    cout<<endl;
    return 0;
}

