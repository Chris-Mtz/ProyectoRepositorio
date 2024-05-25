#include "Ninja.h"

Ninja::Ninja() : Persona(){
    aldea = "N/A";
    especialidad = "N/A";
}

Ninja::Ninja(const Ninja &rhs) : Persona(rhs) {
    this -> aldea = rhs.aldea;
    this -> especialidad = rhs.especialidad;
}

Ninja::Ninja(std::string nombre, std::string genero, int edad, float estatura, float peso, std::string aldea, std::string especialidad) {
    this -> aldea = aldea;
    this -> especialidad = especialidad;
}

std::string Ninja::getAldea() const {
    return aldea;
}

void Ninja::setAldea(std::string NewAldea) {
    this -> aldea = NewAldea;
}

std::string Ninja::getEspecialidad() const{
    return especialidad;
}

void Ninja::setEspecialidad(std::string NewEspecialidad) {
    this -> especialidad = NewEspecialidad;
}