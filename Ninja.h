#ifndef CRISTIAN_PROGRAMAS_NINJA_H
#define CRISTIAN_PROGRAMAS_NINJA_H

#include "Persona.h"

class Ninja: public Persona{

public:
    Ninja();
    Ninja(std::string nombre, std::string genero, int edad, float estatura, float peso, std::string aldea, std::string especialidad);
    Ninja(const Ninja &rhs);
    ~Ninja() = default;

    std::string getAldea() const;
    void setAldea(std::string NewAldea);

    std::string getEspecialidad() const;
    void setEspecialidad(std::string NewEspecialidad);

private:
    std::string nombre;
    std::string genero;
    int edad;
    float estatura;
    float peso;
    std::string aldea;
    std::string especialidad;

};