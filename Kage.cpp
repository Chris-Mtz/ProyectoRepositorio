#include "Kage.h"

Kage::Kage() : Sanin() {
    liderazgo = "N/A";
    poder = "N/A";
    autoridad = "N/A";
}

Kage::Kage(std::string nombre, std::string genero, int edad, float estatura, float peso, std::string aldea, std::string especialidad, std::string liderazgo, std::string poder, std::string autoridad)
        : Sanin(nombre, genero, edad, estatura, peso, aldea, especialidad, "N/A", "N/A", "N/A") {
    this->liderazgo = liderazgo;
    this->poder = poder;
    this->autoridad = autoridad;
}

Kage::Kage(const Kage &rhs) : Sanin(rhs) {
    this->liderazgo = rhs.liderazgo;
    this->poder = rhs.poder;
    this->autoridad = rhs.autoridad;
}

std::string Kage::getLiderazgo() const {
    return liderazgo;
}

void Kage::setLiderazgo(std::string newLiderazgo) {
    liderazgo = newLiderazgo;
}

std::string Kage::getPoder() const {
    return poder;
}

void Kage::setPoder(std::string newPoder) {
    poder = newPoder;
}

std::string Kage::getAutoridad() const {
    return autoridad;
}

void Kage::setAutoridad(std::string newAutoridad) {
    autoridad = newAutoridad;
}
