//
// Created by jlpereira on 12/14/18.
//

#include "Princi.h"

Princi::Princi() {
    principal=0;
}



Princi::~Princi() {

}

Node *Princi::getPrincipal() const {
    return principal;
}

void Princi::setPrincipal(Node *principal) {
    Princi::principal = principal;
}
bool Princi::push(Usuario* obj){
    //crear el nodo contenedor
    Node* newNode= new Node(obj);
    //enlazar con el siguiente nodo
    newNode->setNext(principal);
    //enlazar el inicio al nuevo nodo
    principal=newNode;
    //Retornar
    return true;
}

Node *Princi::getNodo_f() const {
    return nodo_f;
}

void Princi::setNodo_f(Node *nodo_f) {
    Princi::nodo_f = nodo_f;
}
