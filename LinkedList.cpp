//
// Created by Eduardo Medina on 11/09/2019.
//
#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
    List = nullptr;
}

void LinkedList::addNode(int value){
    int whereToAdd;
    Node* newNode = new Node();
    newNode->val = value;
    Node* aux1 = List;
    Node* aux2;
    do{
        std::cout<<"Where would you like to add a Node? Type 1 to add it on the back or 0 to add it on the front."; std::cin>>whereToAdd;
    }while(whereToAdd != 1 && whereToAdd != 0);
    if(whereToAdd == 1){
        List = newNode;
    }
    else if(whereToAdd == 0){
        while(aux1 != nullptr){
            aux2 = aux1;
            aux1 = aux1->next;
        }
        if(List == aux1){
            List = newNode;
        }
        else{
            aux2->next = newNode;
        }
    }
    newNode->next = aux1;
}



