//
// Created by jlpereira on 12/14/18.
//

#include "Node.h"
#include "Usuario.h"

Node::Node() {
    data=0;
    next=0;
}

Node::Node(Usuario *) {
    this->data=data;
    next=0;
}

Usuario* Node::getData() {
    return data;
}

void Node::setData(Usuario * pdata) {
    data=pdata;
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node * pNext) {
    next=pNext;
}

Node::~Node() {
    if(next)
        delete next;
    if(data)
        delete data;
}

void Node::agregar(Node* nodo) {
    Node* temp=this->getNext();
    while (true){
        if(temp==0){
            this->setNext(nodo);
            break;
        }else{
            temp=temp->getNext();
        }
    }
}

