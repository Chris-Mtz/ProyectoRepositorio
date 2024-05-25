#include <iostream>
#include <string>
//#include "Coche.h"


#include "ninjaSupremo.h"
#include <iostream>

int main() {

    ninjaSupremo ninja1{};
    ninjaSupremo ninja2("Naruto Uzumaki", "Masculino", 17, 1.74f, 50.9f,
                        "Alto", "Muy rapidos", "Extremo",
                        "Perfecto", "Muy alto", "Superior");


    std::cout << "Nombre: " << ninja2.getNombre() << std::endl;
    std::cout << "Edad: " << ninja2.getEdad() << " anios" << std::endl;
    std::cout << "Estatura: " << ninja2.getEstatura() << " m" << std::endl;
    std::cout << "Peso: " << ninja2.getPeso() << " kg" << std::endl;
    std::cout << "Genero: " << ninja2.getGenero() << std::endl;

    std::cout << "Aumento de Poder en Modo Sabio: " << ninja2.getAumentoPoder() << std::endl;
    std::cout << "Reflejos en Modo Sabio: " << ninja2.getReflejos() << std::endl;
    std::cout << "Mejora de Ninjutsu en Modo Sabio: " << ninja2.getMejoraNinjutsu() << std::endl;

    std::cout << "Control de Biju: " << ninja2.getControlBiju() << std::endl;
    std::cout << "Aumento de Chakra por Biju: " << ninja2.getAumentoChakra() << std::endl;
    std::cout << "Curacion Mejorada por Biju: " << ninja2.getCuracionMejorada() << std::endl;

    return 0;
}
