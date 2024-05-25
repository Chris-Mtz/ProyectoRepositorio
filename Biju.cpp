#include "Biju.h"
#include <string>

Biju:: Biju() {
    this -> controlBiju = "N/A";
    this -> aumentoChakra = "N/A";
    this -> curacionMejorada = "N/A";

}

Biju::Biju(std::string controlBiju, std::string aumentoChakra, std::string curacionMejorada) {
    this -> controlBiju = controlBiju;
    this -> aumentoChakra = aumentoChakra;
    this -> curacionMejorada = curacionMejorada;

}

Biju::Biju(const Biju &rhs) {
    controlBiju = rhs.controlBiju;
    aumentoChakra = rhs.aumentoChakra;
    curacionMejorada = rhs.curacionMejorada;

}

std::string Biju::getControlBiju() const {
    return controlBiju;
}

void Biju::setControlBiju(std::string controlBiju) {
    this -> controlBiju = controlBiju;
}

std::string Biju::getAumentoChakra() const {
    return aumentoChakra;
}

void Biju::setAumentoChakra(std::string aumentoChakra) {
    this -> aumentoChakra = aumentoChakra;
}

std::string Biju::getCuracionMejorada() const {
    return curacionMejorada;
}

void Biju::setCuracionMejorada(std::string curacionMejorada) {
    this -> curacionMejorada = curacionMejorada;
}



