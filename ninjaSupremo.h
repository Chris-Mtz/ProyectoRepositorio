#ifndef CRISTIAN_PROGRAMAS_NINJASUPREMO_H
#define CRISTIAN_PROGRAMAS_NINJASUPREMO_H

#include "Persona.h"
#include "modoSabio.h"
#include "Biju.h"

class ninjaSupremo : public Persona, public modoSabio, public Biju {

public:

    ninjaSupremo();


    ninjaSupremo(std::string nombre, std::string genero, int edad, float estatura, float peso,
                 std::string aumentoPoder, std::string reflejos, std::string mejoraNinjutsu,
                 std::string controlBiju, std::string aumentoChakra, std::string curacionMejorada);


    ninjaSupremo(const ninjaSupremo &rhs);
    ~ninjaSupremo() = default;


};


#endif //CRISTIAN_PROGRAMAS_NINJASUPREMO_H
