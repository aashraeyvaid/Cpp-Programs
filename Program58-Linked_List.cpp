#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node *next;
    Node(int v)
    {
        value=v;
        next=NULL;
    }

};
void traverse(Node *head)
{
    Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(Node *&head,int val)
{
    Node *node3=new Node(val);
    node3->next=head;
    head=node3;
}
void insertAtEnd(Node *&head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    else
    {
        Node *node4=new Node(val);
        node4->next=NULL;
        Node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=node4;
    }
}
void insertAtPos(Node *&head,int val,int pos)
{
    if(head==NULL || pos==1)
    {
        insertAtHead(head,val);
        return;
    }
    else
    {
        Node *node5=new Node(val);
        Node *prev=head;
        int count=1;
        while(count<pos-1)
        {
            prev=prev->next;
            count++;
        }
        node5->next=prev->next;
        prev->next=node5;
    }
}
void deleteAtHead(Node *&head)
{
    if(head==NULL)
    {
        return;
    }
    Node *temp=head;
    head=temp->next;
    delete temp;
}
void deleteAtEnd(Node *&head)
{
    if(head==NULL)
        return;
    Node *temp=head;
    while((temp->next)->next!=NULL)
    {
        temp=temp->next;
    }
    Node *last=temp->next;
    temp->next=NULL;
    delete last;
}
void deleteAtPos(Node *&head,int pos)
{
    if(head==NULL)
        return;
    Node *temp=head;
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    Node *last=temp->next;
    temp->next=last->next;
    delete last;
}
void search(Node *&head,int val)
{
    Node *temp=head;
    int count=0;
    while(temp->value!=val)
    {
        temp=temp->next;
        count++;
    }
    cout<<"Found at "<<count+1<<" position"<<endl;
}
int main()
{
    Node *node1=new Node(1);
    Node *node2=new Node(10);
    node1->next=node2;
    Node *head=node1;
    insertAtHead(head,12);
    insertAtEnd(head,20);
    insertAtPos(head,14,3);
    insertAtPos(head,26,4);
    insertAtPos(head,32,4);
    deleteAtHead(head);
    deleteAtEnd(head);
    deleteAtPos(head,3);
    traverse(head);
    search(head,26);
}