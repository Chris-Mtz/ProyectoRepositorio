#include "Chunin.h"

Chunin::Chunin() : Ninja(){
    nivel = "N/A";
    habilidades = "N/A";
    rol = "N/A";

}

Chunin::Chunin(const Chunin &rhs) : Ninja(rhs){
    this -> nivel = rhs.nivel;
    this -> habilidades = rhs.habilidades;
    this -> rol = rhs.rol;

}

Chunin::Chunin(std::string nombre, std::string genero, int edad, float estatura, float peso, std::string aldea, std::string especialidad, std::string nivel, std::string habilidades, std::string rol) {
    this -> nivel = nivel;
    this -> habilidades = habilidades;
    this -> rol = rol;
}

std::string Chunin::getNivel() const {
    return nivel;
}

void Chunin::setNivel(std::string NewNivel) {
    this -> nivel = NewNivel;
}

std::string Chunin::getHabilidades() const{
    return habilidades;
}

void Chunin::setHabilidades(std::string NewHabilidades) {
    this -> habilidades = NewHabilidades;
}

std::string Chunin::getRol() const{
    return rol;
}

void Chunin::setRol(std::string NewRol) {
    this -> rol = NewRol;
}