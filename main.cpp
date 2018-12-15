#include <iostream>
#include "Usuario.h"
#include "Node.h"
#include <ostream>
#include "fstream"
#include "Princi.h"


using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ios;
using std::vector;
void escribir_binario();
void leer_binario();

int main() {
    /*
    Usuario* u=new Usuario("Jose",12,"Male");
    Usuario* u2=new Usuario("Luis",18,"Male");
    Node* n=new Node();
    //
    Node* n2=new Node();
    Node* n3=new Node();

    n2->setData(u);
    n3->setData(u2);

    n2->setNext(n3);
    n->setNext(n2);


    cout<<n->getData()->getNombre();
    */

    Node *nodo_principal = new Node();
    vector<Usuario> sor;
    int w = 0;
    int po = 0;
    Usuario actual;
    while (w == 0) {
        cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
        cout << " * * * * * * * * * * * * * * * * * * * * * * * * * * * *  " << endl;
        cout << "*   ooooooo ooooooo  o     o  oooo   ooooo  ooooo        *" << endl;
        cout << " *     o       o     o o   o  o   o  o      o    o      * " << endl;
        cout << "*      o       o     o  o  o  o   o  ooooo  oo oo         *" << endl;
        cout << " *     o       o     o   o o  o   o  o      o o         * " << endl;
        cout << "*      o    ooooooo  o    oo  oooo   ooooo  o   o        *" << endl;
        cout << " *                                                      * " << endl;
        cout << "*  (1_.) Iniciar Sesion                                  *" << endl;
        cout << " * (2_.) Registrarse                                    * " << endl;
        cout << "*  (3_.) Salir                                           *" << endl;
        cout << " *       --Ingrese su desicion                          * " << endl;
        cout << "*                                                        *" << endl;
        cout << " *                                                      * " << endl;
        cout << " * * * * * * * * * * * * * * * * * * * * * * * * * * * *  " << endl;
        cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
        int des;
        cin >> des;
        if (des == 1) {
            string user, contra;

            cout << "Ingrese su usuario" << endl;
            cin >> user;
            cout << "Ingrese su contrasena" << endl;
            cin >> contra;
            int auxi = 0;
            int a=0;
            for (int i = 0; i < sor.size(); ++i) {
                if (sor.at(i).getUser() == user && sor.at(i).getContra() == contra) {
                    auxi = 1;
                    a=i;
                }
            }
            actual=sor.at(a);
            if (auxi == 1) {
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
                cout << " * * * * * * * * * * * * * * * * * * * * * * * * * * * *  " << endl;
                cout << "*                       BIENVENIDO                      * " << endl;
                cout << " *  1) Sugeridos                                         * " << endl;
                cout << "*   2) Contactos                                        * " << endl;
                cout << "*   3) Resto                                             * " << endl;
                cout << " *                                                      * " << endl;
                cout << " * * * * * * * * * * * * * * * * * * * * * * * * * * * *  " << endl;
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
                int u;
                cin>>u;
                vector<Usuario> ola;
                if(u==1){
                    for (int i = 0; i <sor.size() ; ++i) {
                        for (int k = 0; k < actual.getIntereses().size() ; ++k) {
                            for (int j = 0; j <sor.at(i).getIntereses().size() ; ++j) {
                                if (actual.getIntereses().at(k)==sor.at(i).getIntereses().at(j)) {
                                    ola.push_back(sor.at(i));
                                    //cout<<sor.at(i).getNombre();
                                }
                            }
                        }
                    }
                    for (int l = 0; l <ola.size() ; ++l) {
                       // cout<<ola.at(l).getNombre()<<endl;
                    }

                }else if(u==2){

                }else if(u==3){

                }else{
                    cout<<"Dato no Valido..."<<endl;
                }
            }

        } else if (des == 2) {
            string nombre, sexo;
            int edad;
            vector<string> intereses;
            string user, contra;

            cout << "Ingrese su usuario" << endl;
            cin >> user;
            cout << "Ingrese su contrasena" << endl;
            cin >> contra;
            cout << "Ingrese su nombre: " << endl;
            cin >> nombre;
            cout << nombre << " ingrese su edad: " << endl;
            cin >> edad;
            cout << nombre << " ingrese su genero: " << endl;
            cin >> sexo;

            Usuario tem(nombre, edad, sexo, user, contra);
            int aux = 0;
            cout << "**********HOBBIES***********" << endl;
            while (aux == 0) {
                cout << "Ingrese un hobbie: " << endl;
                string o;
                cin >> o;
                intereses.push_back(o);
                cout << "Desea continuar si[0]/no[1]" << endl;
                cin >> aux;
            }
            tem.setIntereses(intereses);
            cout << "Usuario Registrado Correctamente!" << endl;
            sor.push_back(tem);
            Usuario *temp = new Usuario(nombre, edad, sexo, user, contra);
            Node *n = new Node();
            n->setData(temp);
            nodo_principal->agregar(n);

        } else if (des == 3) {
            w = 99;

        } else {

            //else if(nodo_principal->getPrincipal()->getNext()==NULL){
/*
                Node* tempo=nodo_principal->getNext();
                while (tempo!=NULL){
                    cout << tempo->getData()->getNombre();
                        tempo = tempo->getNext();

                    }

*/
            //}
            cout << "Dato no Valido..." << endl;
        }
    }

        return 0;

}
//palad

void escribir_usuario(){

}

void leer_binario(){

}