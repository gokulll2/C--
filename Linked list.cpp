#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
Node* takeInput()
{
    int data;
    cin>> data;
    Node* head=NULL;
    while(data!=-1)
    {
        Node* newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
    }
    return head;
}
void MID(Node* head)
{
    Node* slow=head;
    Node* fast=slow->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<endl;
}
void DELETE(Node* head,int key)
{
     Node* temp=head;
     while(temp->next->data!=key)
     {
         temp=temp->next;
     }
     temp->next=temp->next->next;
}
Node* Insert(Node* head,int i,int data)
{
    Node* lu=new Node(data);
    Node* pehla=head;
    Node* dusra;
    while(pehla->next->data!=i)
    {
        pehla=pehla->next;
    }
    dusra=pehla->next;
    pehla->next=lu;
    lu->next=dusra;
    return head;
}
void insertatTail(Node* &head,Node* &tail,int d)
{
    Node* temp=new Node(d);
    if(head==NULL && tail==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    tail->next=temp;
    tail=tail->next;
}
void Print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
    Node* head=takeInput();
    MID(head);
    DELETE(head,5);
    head=Insert(head,4,54);
    Print(head);
    return 0;
}
