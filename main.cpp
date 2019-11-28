#include "linkedlist.h"

int main()
{
    List l;
    l.addToHead(6);
    l.addToHead(5);
    l.addToHead(4);
    l.addToHead(3);
    l.addToHead(2);
    l.traverse();
    l.removeFromHead();
    l.removeFromHead();
    l.traverse();
}