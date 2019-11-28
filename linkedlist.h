#define LINKEDLIST_H

class Node
{
  public:
    int info;
    Node *next;
};

class List
{
  Node *HEAD;
  Node *TAIL;
  
  public:
    List();
    ~List();
    bool isEmpty();
    void addToHead(int data);
    void add(int data,Node *predecessor);
    void addToTail(int data);
    void removeFromHead();
    void remove(int data);
    bool search(int data); //checks if data is present
    void traverse();
    bool retrieve(int data,Node *outputptr);
};