#ifndef LINKDLIST_LINKEDLIST_H
#define LINKDLIST_LINKEDLIST_H

struct Node{
    int val;
    Node* next;
};


class LinkedList {
private:
    Node* List;

public:
    int isThereANode = 0;
    LinkedList();
    void addNode(int);
    void printList();
    void destruct();
};


#endif //LINKDLIST_LINKEDLIST_H
