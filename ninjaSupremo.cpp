#include "ninjaSupremo.h"


ninjaSupremo::ninjaSupremo() : Persona(), modoSabio(), Biju() {

}


ninjaSupremo::ninjaSupremo(std::string nombre, std::string genero, int edad, float estatura, float peso,
                           std::string aumentoPoder, std::string reflejos, std::string mejoraNinjutsu,
                           std::string controlBiju, std::string aumentoChakra, std::string curacionMejorada)
        : Persona(nombre, genero, edad, estatura, peso),
          modoSabio(aumentoPoder, reflejos, mejoraNinjutsu),
          Biju(controlBiju, aumentoChakra, curacionMejorada){

}

ninjaSupremo::ninjaSupremo(const ninjaSupremo &rhs) : Persona(rhs), modoSabio(rhs), Biju(rhs) {

}