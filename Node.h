//
// Created by jlpereira on 12/14/18.
//

#ifndef EXAMEN2_JOSEPEREIRA_NODE_H
#define EXAMEN2_JOSEPEREIRA_NODE_H

#include "Usuario.h"

class Node {
private:
    Usuario* data;
    Node* next;
public:
    //constructores
    Node(Usuario*);
    Node();
    //data
    Usuario* getData();
    void setData(Usuario*);
    //node
    void setNext(Node*);
    Node* getNext();
    //destructor

    void agregar(Node*);

    ~Node();
};



#endif //EXAMEN2_JOSEPEREIRA_NODE_H
