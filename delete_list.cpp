#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node* head=NULL,*tail=NULL;
void createnode(int value)
{
    Node *temp=new Node;
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        temp=NULL;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}
void delete_start()
{
    Node *temp=new Node;
    temp=head;
    head=head->next;
    delete temp;
}
void delete_last()
{
    Node *cur=new Node;
    Node *prev=new Node;
    cur=head;
    while(cur->next!=NULL){
        prev=cur;
        cur=cur->next;
    }
    tail=prev;
    prev->next=NULL;
    delete cur;
}
void delete_position(int pos)
{
    Node *pre=new Node;
    Node *cur=new Node;
    cur=head;
    for(int i=1;i<pos;i++){
        pre=cur;
        cur=cur->next;
    }
    pre->next=cur->next;
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
    while(1)
    {
        cout<<"For insert press->1"<<endl;
        cout<<"For delete first->2"<<endl;
        cout<<"For delete last->3"<<endl;
        cout<<"For given position->4"<<endl;
        cout<<"Enter your choice: ";
        int n,in,ch,pos;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"How many value you want to put in list?: ";
            cin>>n;
            cout<<"Insert value in list: ";
            for(int i=0;i<n;i++){
                cin>>in;
                createnode(in);
            }
            cout<<"Your list value are: ";
            display();
            cout<<endl;
            break;
        case 2:
            delete_start();
            cout<<"Your updated list is: ";
            display();
            cout<<endl;
            break;
        case 3:
            delete_last();
            cout<<"Your updated list is: ";
            display();
            cout<<endl;
            break;
        case 4:
            cout<<"Enter your position: ";
            cin>>pos;
            delete_position(pos);
            cout<<"Your updated list is: ";
            display();
            cout<<endl;
            break;
        }
        cout<<endl<<endl;
    }
    return 0;
}
