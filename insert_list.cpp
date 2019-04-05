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
void insert_start(int value)
{
    Node *temp=new Node;
    temp->data=value;
    temp->next=head;
    head=temp;
}
void insert_last(int value)
{
    Node *temp=new Node;
    temp->data=value;
    //temp->next=head;
    //head=temp;
    tail->next=temp;
    tail=temp;
}
void insert_position(int value,int pos)
{
    Node *pre=new Node;
    Node *cur=new Node;
    Node *temp=new Node;
    cur=head;
    for(int i=1;i<pos;i++){
        pre=cur;
        cur=cur->next;
    }
    temp->data=value;
    pre->next=temp;
    temp->next=cur;
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
        cout<<"For insert first->2"<<endl;
        cout<<"For insert last->3"<<endl;
        cout<<"For given position->4"<<endl;
        cout<<"Enter your choice: ";
        int n,in,ch,temp,pos,val;
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
            cout<<"Enter your value: ";
            cin>>temp;
            insert_start(temp);
            cout<<"Your updated list is: ";
            display();
            cout<<endl;
            break;
        case 3:
            cout<<"Enter your value: ";
            cin>>temp;
            insert_last(temp);
            cout<<"Your updated list is: ";
            display();
            cout<<endl;
            break;
        case 4:
            cout<<"Enter your position: ";
            cin>>pos;
            cout<<"Enter your value: ";
            cin>>val;
            insert_position(val,pos);
            cout<<"Your updated list is: ";
            display();
            cout<<endl;
            break;
        }
        cout<<endl<<endl;
    }
    return 0;
}
