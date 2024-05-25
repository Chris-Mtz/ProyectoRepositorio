#ifndef CRISTIAN_PROGRAMAS_BIJU_H
#define CRISTIAN_PROGRAMAS_BIJU_H

#include <string>

class Biju {
public:
    Biju(); //Constructor default
    Biju(const Biju &rhs); //Constructor de copia
    Biju(std::string controlBiju, std::string aumentoChakra , std::string curacionMejorada); //Constructor Parametros
    ~Biju() = default;

    std::string getControlBiju() const;
    void setControlBiju(std::string controlBiju);

    std::string getAumentoChakra() const;
    void setAumentoChakra(std::string aumentoChakra);

    std::string getCuracionMejorada() const;
    void setCuracionMejorada(std::string curacionMejorada);

private:
    std::string controlBiju;
    std::string aumentoChakra;
    std::string curacionMejorada;

};

#endif //CRISTIAN_PROGRAMAS_BIJU_H
