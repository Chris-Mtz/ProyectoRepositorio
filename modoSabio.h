#ifndef CRISTIAN_PROGRAMAS_MODOSABIO_H
#define CRISTIAN_PROGRAMAS_MODOSABIO_H

#include <string>

class modoSabio {
public:
    modoSabio(); //Constructor default
    modoSabio(const modoSabio &rhs); //Constructor de copia
    modoSabio(std::string aumentoPoder, std::string reflejos , std::string mejoraNinjutsu); //Constructor Parametros
    ~modoSabio() = default;

    std::string getAumentoPoder() const;
    void setAumentoPoder(std::string aumentoPoder);

    std::string getReflejos() const;
    void setReflejos(std::string reflejos);

    std::string getMejoraNinjutsu() const;
    void setMejoraNinjutsu(std::string mejoraNinjutsu);

private:
    std::string aumentoPoder;
    std::string reflejos;
    std::string mejoraNinjutsu;

};

#endif //CRISTIAN_PROGRAMAS_MODOSABIO_H
