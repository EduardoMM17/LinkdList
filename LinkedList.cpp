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
    if(isThereANode == 0){
        newNode->next = List;
        List = newNode;
        std::cout<<"First node with the value of " << value << " has been correctly added." << std::endl;
    }
    else{
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
            aux2->next = newNode;
        }
        newNode->next = aux1;
        if(whereToAdd == 1){
            std::cout <<"Node with the value of" << value << " correctly added to the back." << std::endl;
        }
        else{
            std::cout <<"Node with the value of" << value << " correctly added to the front." << std::endl;
        }
    }
    isThereANode = 1;
}

void LinkedList::printList() {
    Node* aux1 = List;
    while(aux1 != nullptr){
        std::cout << aux1->val << std::endl;
        aux1 = aux1->next;
    }
}






