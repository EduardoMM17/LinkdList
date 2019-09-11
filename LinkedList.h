#ifndef LINKDLIST_LINKEDLIST_H
#define LINKDLIST_LINKEDLIST_H

struct Node{
    int val;
    Node* next;
};


class LinkedList {
private:
    Node* List;
    int isThereANode = 0;
public:
    LinkedList();
    void addNode(int);
};


#endif //LINKDLIST_LINKEDLIST_H
