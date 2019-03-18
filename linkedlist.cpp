#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node* head=NULL;
void insrt(int new_data)
{
    struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
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
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    insrt(3);
    insrt(1);
    insrt(7);
    insrt(2);
    insrt(9);
    cout<<"The linked list is: ";
    display();
    cout<<endl;
    return 0;
}
