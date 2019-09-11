#include <iostream>
#include <cassert>
#include "LinkedList.h"
#include "Functions.h"


int main() {
    int numberOfNodes;
    std::cout<<"Enter the number of nodes you want to put into the list: "; std::cin>> numberOfNodes;
    LinkedList* L1 = new LinkedList();
    addSetNodes(L1,numberOfNodes);
    L1->printList();
    return 0;
}

