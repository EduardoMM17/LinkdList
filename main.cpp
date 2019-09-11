#include <iostream>
#include <cassert>
#include "LinkedList.h"

void addSetNodes(LinkedList* &, int);

int main() {
    int numberOfNodes;
    std::cout<<"Enter the number of nodes you want to put into the list: "; std::cin>> numberOfNodes;
    LinkedList* L1 = new LinkedList();
    addSetNodes(L1,numberOfNodes);
    L1->printList();
    return 0;
}

void addSetNodes(LinkedList*& L, int numberOfNodes){
    int value;
    for(int i = 0; i < numberOfNodes; i++){
        std::cout<<"Enter the value of the node you want to put into the list"; std::cin>>value;
        L->addNode(value);
    }
}