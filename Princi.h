//
// Created by jlpereira on 12/14/18.
//

#ifndef EXAMEN2_JOSEPEREIRA_PRINCI_H
#define EXAMEN2_JOSEPEREIRA_PRINCI_H

#include "Node.h"

class Princi {
private:
    Node* principal;
    Node* nodo_f;
public:
    Princi();

    virtual ~Princi();

    Node *getPrincipal() const;

    void setPrincipal(Node *principal);

    bool push(Usuario* obj);

    Node *getNodo_f() const;

    void setNodo_f(Node *nodo_f);

};


#endif //EXAMEN2_JOSEPEREIRA_PRINCI_H
