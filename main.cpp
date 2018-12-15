//Continuando
#include <iostream>
#include "Usuario.h"
#include "Node.h"
#include <ostream>
#include "fstream"
#include "Princi.h"
#include "cstring"
#include <string.h>



using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ios;
using std::vector;
using std::strcpy;

void escribir_binario(vector<Usuario>);



void leer_binario();

using std::ostream;

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
        cout << "*  (4_.) Escribir a binario                            *" << endl;
        cout << " *                                                      * " << endl;
        cout << "*                                                      *" << endl;
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
                        if (actual.getUser()==ola.at(l).getUser()){

                        }else{
                            cout<<l<<") "<<ola.at(l).getUser()<<endl;
                        }
                    }
                    cout<<"Ingrese la posicion del contacto sugerido que desea agregar: "<<endl;
                    int po;
                    cin>>po;

                    for (int m = 0; m < sor.size(); ++m) {
                        if (sor.at(m).getUser()==actual.getUser()){
                            sor.at(m).addUser(ola.at(po));
                            break;
                        }
                    }
                    cout<<"Usuario agregado correctamente"<<endl;

                }else if(u==2){
                    int y;
                    for (int m = 0; m < sor.size(); ++m) {
                        if (sor.at(m).getUser()==actual.getUser()){
                          y=m;
                          m=12312;
                          break;
                        }
                    }
                    for (int i = 0; i <sor.at(y).getUsers().size() ; ++i) {
                        cout<<"Usuario: "<<sor.at(y).getUsers().at(i).getUser()<<" Nombre: "<<sor.at(y).getUsers().at(i).getNombre()<<endl;
                        cout<<"Edad: "<<sor.at(y).getUsers().at(i).getEdad()<<" Genero: "<<sor.at(y).getUsers().at(i).getSexo()<<endl;
                        cout<<endl;
                    }
                }else if(u==3){
                    for (int i = 0; i <sor.size() ; ++i) {
                        for (int k = 0; k < actual.getIntereses().size() ; ++k) {
                            for (int j = 0; j <sor.at(i).getIntereses().size() ; ++j) {
                                if (actual.getIntereses().at(k)==sor.at(i).getIntereses().at(j)) {

                                    //cout<<sor.at(i).getNombre();
                                }else{
                                    ola.push_back(sor.at(i));
                                }
                            }
                        }
                    }
                    for (int l = 0; l <ola.size() ; ++l) {
                        if (actual.getUser()==ola.at(l).getUser()){

                        }else{
                            cout<<l<<") "<<ola.at(l).getUser()<<endl;
                        }
                    }
                    cout<<"Ingrese la posicion del contacto sugerido que desea agregar: "<<endl;
                    int po;
                    cin>>po;

                    for (int m = 0; m < sor.size(); ++m) {
                        if (sor.at(m).getUser()==actual.getUser()){
                            sor.at(m).addUser(ola.at(po));
                            break;
                        }
                    }
                    cout<<"Usuario agregado correctamente"<<endl;
                }else{
                    cout<<"Dato no Valido..."<<endl;
                }
            }else{
                cout<<"Usuario y/o cuenta no validos..."<<endl;
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

        } else if(des==4){
            escribir_binario(sor);

        } else if(des==5){
            leer_binario();
        }
        else {

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


void escribir_binario(vector<Usuario> v) {
    ofstream alumnosW("Users.dat", std::ios::binary);
    for (int i = 0; i < v.size(); ++i) {

        Usuario *alumno1 = new Usuario(v.at(i).getNombre(), v.at(i).getEdad(), v.at(i).getSexo(), v.at(i).getUser(),
                                       v.at(i).getContra());
        alumno1->write(alumnosW);
        alumnosW.close();

        string data;
        cin >> data;

        cout << data;
    }

}
