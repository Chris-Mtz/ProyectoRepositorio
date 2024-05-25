#ifndef CRISTIAN_PROGRAMAS_JONIN_H
#define CRISTIAN_PROGRAMAS_JONIN_H

#include "Chunin.h"

class Jonin : public Chunin {
public:
    Jonin();
    Jonin(std::string nombre, std::string genero, int edad, float estatura, float peso, std::string aldea, std::string especialidad, std::string especializacion, std::string autonomia, std::string fuerza);
    Jonin(const Jonin &rhs);
    ~Jonin() = default;

    std::string getEspecializacion() const;
    void setEspecializacion(std::string newEspecializacion);

    std::string getAutonomia() const;
    void setAutonomia(std::string newAutonomia);

    std::string getFuerza() const;
    void setFuerza(std::string newFuerza);

private:
    std::string especializacion;
    std::string autonomia;
    std::string fuerza;
};


#endif //CRISTIAN_PROGRAMAS_JONIN_H
