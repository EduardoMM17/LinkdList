#include <iostream>
#include "Functions.h"

void addSetNodes(LinkedList*& L, int numberOfNodes){
    int value;
    for(int i = 0; i < numberOfNodes; i++){
        std::cout<<"Enter the value of the node you want to put into the list"; std::cin>>value;
        L->addNode(value);
    }
}
