
#ifndef CRISTIAN_PROGRAMAS_PERSONA_H
#define CRISTIAN_PROGRAMAS_PERSONA_H

#include <string>

class Persona {
public:
    Persona(); //Constructor default
    Persona(const Persona &rhs); //Constructor de copia
    Persona(std::string nombre, std::string genero, int edad, float estatura, float peso); //Constructor Parametros
    ~Persona() = default;

    std::string getNombre() const;
    void setNombre(std::string nombre);

    std::string getGenero() const;
    void setGenero(std::string genero);

    int getEdad() const;
    void setEdad(int edad);

    float getEstatura() const;
    void setEstatura(float estatura);

    float getPeso () const;
    void setPeso(float peso);

private:
    std::string nombre;
    std::string genero;
    int edad;
    float estatura;
    float peso;

};

#endif //CRISTIAN_PROGRAMAS_PERSONA_H
