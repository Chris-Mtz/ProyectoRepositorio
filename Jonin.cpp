#include "Jonin.h"

Jonin::Jonin() : Chunin() {
    especializacion = "N/A";
    autonomia = "N/A";
    fuerza = "N/A";
}

Jonin::Jonin(std::string nombre, std::string genero, int edad, float estatura, float peso, std::string aldea, std::string especialidad, std::string especializacion, std::string autonomia, std::string fuerza)
        : Chunin(nombre, genero, edad, estatura, peso, aldea, especialidad, "N/A", "N/A", "N/A") {
    this->especializacion = especializacion;
    this->autonomia = autonomia;
    this->fuerza = fuerza;
}

Jonin::Jonin(const Jonin &rhs) : Chunin(rhs) {
    this->especializacion = rhs.especializacion;
    this->autonomia = rhs.autonomia;
    this->fuerza = rhs.fuerza;
}

std::string Jonin::getEspecializacion() const {
    return especializacion;
}

void Jonin::setEspecializacion(std::string newEspecializacion) {
    especializacion = newEspecializacion;
}

std::string Jonin::getAutonomia() const {
    return autonomia;
}

void Jonin::setAutonomia(std::string newAutonomia) {
    autonomia = newAutonomia;
}

std::string Jonin::getFuerza() const {
    return fuerza;
}

void Jonin::setFuerza(std::string newFuerza) {
    fuerza = newFuerza;
}