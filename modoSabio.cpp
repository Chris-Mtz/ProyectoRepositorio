#include "modoSabio.h"
#include <string>

modoSabio::modoSabio() {
    this -> aumentoPoder = "N/A";
    this -> reflejos = "N/A";
    this -> mejoraNinjutsu = "N/A";

}

modoSabio::modoSabio(std::string aumentoPoder, std::string reflejos, std::string mejoraNinjutsu) {
    this -> aumentoPoder = aumentoPoder;
    this -> reflejos = reflejos;
    this -> mejoraNinjutsu = mejoraNinjutsu;

}

modoSabio::modoSabio(const modoSabio &rhs) {
    aumentoPoder = rhs.aumentoPoder;
    reflejos = rhs.reflejos;
    mejoraNinjutsu = rhs.mejoraNinjutsu;

}

std::string modoSabio::getAumentoPoder() const {
    return aumentoPoder;
}

void modoSabio::setAumentoPoder(std::string aumentoPoder) {
    this -> aumentoPoder = aumentoPoder;
}

std::string modoSabio::getReflejos() const {
    return reflejos;
}

void modoSabio::setReflejos(std::string reflejos) {
    this -> reflejos = reflejos;
}

std::string modoSabio::getMejoraNinjutsu() const {
    return mejoraNinjutsu;
}

void modoSabio::setMejoraNinjutsu(std::string mejoraNinjutsu) {
    this -> mejoraNinjutsu = mejoraNinjutsu;
}


