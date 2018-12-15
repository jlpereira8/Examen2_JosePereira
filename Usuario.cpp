//
// Created by jlpereira on 12/14/18.
//

#include "Usuario.h"
#include "iostream"

using std::cout;
using std::endl;

Usuario::Usuario() {}



Usuario::~Usuario() {
    cout<<"Liberando Usuario..."<<endl;
}

const string &Usuario::getNombre() const {
    return Nombre;
}

void Usuario::setNombre(const string &Nombre) {
    Usuario::Nombre = Nombre;
}

int Usuario::getEdad() const {
    return edad;
}

void Usuario::setEdad(int edad) {
    Usuario::edad = edad;
}

const string &Usuario::getSexo() const {
    return sexo;
}

void Usuario::setSexo(const string &sexo) {
    Usuario::sexo = sexo;
}

const vector<string> &Usuario::getIntereses() const {
    return intereses;
}

void Usuario::setIntereses(const vector<string> &intereses) {
    Usuario::intereses = intereses;
}

const vector<Usuario> &Usuario::getUsers() const {
    return users;
}

void Usuario::setUsers(const vector<Usuario> &users) {
    Usuario::users = users;
}

void Usuario::addInteres(string s) {
    intereses.push_back(s);
}

void Usuario::addUser(Usuario u) {
    users.push_back(u);
}

const string &Usuario::getUser() const {
    return user;
}

void Usuario::setUser(const string &user) {
    Usuario::user = user;
}

const string &Usuario::getContra() const {
    return contra;
}

void Usuario::setContra(const string &contra) {
    Usuario::contra = contra;
}

Usuario::Usuario(const string &Nombre, int edad, const string &sexo, const string &user, const string &contra) : Nombre(
        Nombre), edad(edad), sexo(sexo), user(user), contra(contra) {}
