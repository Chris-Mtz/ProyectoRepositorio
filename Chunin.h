#ifndef CRISTIAN_PROGRAMAS_CHUNIN_H
#define CRISTIAN_PROGRAMAS_CHUNIN_H

#include "Ninja.h"

class Chunin: public Ninja{

public:
    Chunin();
    Chunin(std::string nombre, std::string genero, int edad, float estatura, float peso, std::string aldea, std::string especialidad, std::string nivel, std::string habilidades, std::string rol);
    Chunin(const Chunin &rhs);
    ~Chunin() = default;

    std::string getNivel() const;
    void setNivel(std::string NewNivel);

    std::string getHabilidades() const;
    void setHabilidades(std::string NewHabilidades);

    std::string getRol() const;
    void setRol(std::string NewRol);

private:
    std::string nivel;
    std::string habilidades;
    std::string rol;
    
};


#endif //CRISTIAN_PROGRAMAS_CHUNIN_H
