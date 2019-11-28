#include "linkedlist.h"
#include<iostream>
using namespace std;

List::List()
{
    HEAD=NULL;
    TAIL=NULL;
}

List::~List(){}

bool List::isEmpty()
{
    return HEAD==TAIL;
}

void List::addToHead(int data)
{
    Node *newNode=new Node();
    newNode->info=data;
    newNode->next=HEAD;
    HEAD=newNode;
    if (TAIL==NULL)
        TAIL=HEAD;
}
    
void List::add(int data,Node *predecessor)
{
    Node *newNode=new Node();
    newNode->info=data;
    newNode->next=predecessor->next;
    predecessor->next=newNode;
}

void List::addToTail(int data)
{
    Node *newNode=new Node();
    newNode->info=data;
    newNode->next=NULL;
    TAIL->next=newNode;
    TAIL=newNode;
}

void List::removeFromHead()
{
    Node *nodeToDelete;
    nodeToDelete=HEAD;
    HEAD=nodeToDelete->next;
    delete nodeToDelete;
}

void List::remove(int data)
{
    if (isEmpty())
    {
        cout<<"List is empty"<<endl;
    }
    if (HEAD->info==data)
    {
        removeFromHead();
        if (HEAD==NULL) TAIL=NULL;
    }
    else
    {
        Node *temp=HEAD->next;
        Node *prev=HEAD;
        while(temp!=NULL)
        {
            if(temp->info==data)
            {
                prev->next=temp->next;
                delete temp;
                if(prev->next==NULL) TAIL=prev; 
            }
            else
            {
                prev=prev->next;
                temp=temp->next;
            }
        }
    }
}

bool List::search(int data)
{
    Node *temp=HEAD;
    while(temp!=NULL)
    {
        if(temp->info=data)
            return true;
        else
            temp=temp->next;
    }
    return false;
}

void List::traverse()
{
    Node *temp=HEAD;
    while(temp!= NULL)
    {
        cout<<temp->info<<endl;
        temp=temp->next;
    }
}

bool List::retrieve(int data,Node *outputptr)
{
    Node *p=HEAD;
    while(p!=NULL && p->info!=data)
    {
        p=p->next;
    }
    if(p==NULL)
    {
        return false;
    }
    else
    {
        outputptr=p;
        return true;
    }
}