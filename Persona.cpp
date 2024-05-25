#include "Persona.h"
#include <string>

Persona::Persona() {
    this -> nombre = "N/A";
    this -> genero = "N/A";
    this -> edad = 0;
    this -> estatura = 0;
    this -> peso = 0;
}

Persona::Persona(std::string nombre, std::string genero, int edad, float estatura, float peso) {
    this -> nombre = nombre;
    this -> genero = genero;
    this -> edad = edad;
    this -> estatura = estatura;
    this -> peso = peso;
}

Persona::Persona(const Persona &rhs) {
    nombre = rhs.nombre;
    genero = rhs.genero;
    edad = rhs.edad;
    estatura = rhs.estatura;
    peso = rhs.peso;
}

std::string Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(std::string nombre) {
    this -> nombre = nombre;
}

std::string Persona::getGenero() const {
    return genero;
}

void Persona::setGenero(std::string genero) {
    this -> genero = genero;
}

int Persona::getEdad() const {
    return edad;
}

void Persona::setEdad(int edad) {
    this -> edad = edad;
}

float Persona::getEstatura() const {
    return estatura;
}

void Persona::setEstatura(float estatura) {
    this -> estatura = estatura;
}

float Persona::getPeso() const {
    return peso;
}

void Persona::setPeso(float peso) {
    this -> peso = peso;
}