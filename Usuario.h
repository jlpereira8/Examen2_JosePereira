//
// Created by jlpereira on 12/14/18.
//

#ifndef EXAMEN2_JOSEPEREIRA_USUARIO_H
#define EXAMEN2_JOSEPEREIRA_USUARIO_H

#include "string"
using std::string;

#include "vector"
using std::vector;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <iostream>
using std::endl;

using std::ostream;

class Usuario {
private:
    string Nombre;
    int edad;
    string sexo;
    string user;
    string contra;
    vector<string> intereses;
    vector<Usuario> users;
public:
    Usuario();

    Usuario(const string &Nombre, int edad, const string &sexo, const string &user, const string &contra);

    virtual ~Usuario();

    const string &getNombre() const;

    void setNombre(const string &Nombre);

    int getEdad() const;

    void setEdad(int edad);

    const string &getSexo() const;

    void setSexo(const string &sexo);

    const vector<string> &getIntereses() const;

    void setIntereses(const vector<string> &intereses);

    const vector<Usuario> &getUsers() const;

    void setUsers(const vector<Usuario> &users);


    //metodos sex

    void addInteres(string s);

    void addUser(Usuario u);

    const string &getUser() const;

    void setUser(const string &user);

    const string &getContra() const;

    void setContra(const string &contra);

    //binarios

    void write(ofstream&);
    void read(ifstream&);

    friend ostream& operator<<(ostream&, Usuario*);
};


#endif //EXAMEN2_JOSEPEREIRA_USUARIO_H
