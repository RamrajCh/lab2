#include "linkedlist.h"
#include <iostream>
using namespace std;
int main()
{
    List l;
    if(l.isEmpty()) cout<<"List is empty"<<endl; 
    l.addToHead(6);
    l.addToHead(5);
    l.addToHead(4);
    l.addToHead(3);
    l.addToHead(2);
    l.traverse();
    l.removeFromHead();
    l.removeFromHead();
    l.traverse();
    l.addToTail(123);
    l.traverse();
    l.remove(5);
    l.traverse();
    if(l.search(123)) cout<<"123 found"<<endl;
    l.addToTail(34);
    l.andToHead(13);
    Node *pre;
    l.retrieve(123,pre);
    l.add(6,pre);
    l.traverse();
}
