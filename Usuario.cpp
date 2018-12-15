//
// Created by jlpereira on 12/14/18.
//

#include "Usuario.h"
#include "iostream"

using std::cout;
using std::endl;

Usuario::Usuario() {

}



Usuario::~Usuario() {
    //cout<<"Liberando Usuario..."<<endl;
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
//bianr



void Usuario::read(ifstream& in){
    int size;
    in.read(reinterpret_cast<char*>(&size), sizeof(int));
    //Buffer de nombre
    char nameBuffer[size+1];
    in.read(nameBuffer, size);
    nameBuffer[size]=0;
    Nombre=nameBuffer;
    //Edad
    in.read(reinterpret_cast<char*>(&edad), sizeof(int));
    //sexo
    char numBuffer[size+1];
    in.read(numBuffer, size);
    numBuffer[size]=0;
    sexo=numBuffer;

    //USer
    in.read(reinterpret_cast<char*>(&size),sizeof(int));
    char carreraBuffer[size+1];
    in.read(carreraBuffer, size);
    carreraBuffer[size]=0;
    user=carreraBuffer;

    //contra
    in.read(reinterpret_cast<char*>(&size),sizeof(int));
    char carrera2Buffer[size+1];
    in.read(carrera2Buffer, size);
    carrera2Buffer[size]=0;
    contra=carrera2Buffer;

}


void Usuario::write(ofstream& out){
    /*
     * string Nombre;
    int edad;
    string sexo;
    string user;
    string contra;
     */

    //Nombre
    int size = Nombre.size();
    out.write(reinterpret_cast<char*>(&size), sizeof(int));
    out.write(Nombre.data(), size);

    //Edad
    out.write(reinterpret_cast<char*>(&edad), sizeof(int));

    //Sexo
    size=sexo.size();
    out.write(reinterpret_cast<char*>(&size),sizeof(int));
    out.write(sexo.data(), size);

    //User
    size=user.size();
    out.write(reinterpret_cast<char*>(&size), sizeof(int));
    out.write(user.data(),size);

    //Contra
    size=contra.size();
    out.write(reinterpret_cast<char*>(&size), sizeof(int));
    out.write(contra.data(),size);


}

ostream& operator<<(ostream& out, Usuario* student){
    out<<student->Nombre<<","<<student->edad<<","<<student->sexo<<","<<student->user<<student->contra<<endl;
    return out;
}




