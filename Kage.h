#ifndef CRISTIAN_PROGRAMAS_KAGE_H
#define CRISTIAN_PROGRAMAS_KAGE_H

#include "Sanin.h"

class Kage : public Sanin {
public:
    Kage();
    Kage(std::string nombre, std::string genero, int edad, float estatura, float peso, std::string aldea, std::string especialidad, std::string liderazgo, std::string poder, std::string autoridad);
    Kage(const Kage &rhs);
    ~Kage() = default;

    std::string getLiderazgo() const;
    void setLiderazgo(std::string newLiderazgo);

    std::string getPoder() const;
    void setPoder(std::string newPoder);

    std::string getAutoridad() const;
    void setAutoridad(std::string newAutoridad);

private:
    std::string liderazgo;
    std::string poder;
    std::string autoridad;
};

#endif //CRISTIAN_PROGRAMAS_KAGE_H
