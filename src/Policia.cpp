//
// Created by Maikol Guzman Alan on 4/8/22.
//

#include "Policia.h"

#include <utility>

const string &Policia::getNombre() const {
    return nombre;
}

void Policia::setNombre(const string &nombre) {
    Policia::nombre = nombre;
}

string Policia::aprende() {
    return "Aprendo como un policia.";
}

string Policia::aplicaJusticia() {
    return "Aplico la justicia como un policia.";
}

string Policia::ayuda() {
    return "Ayudo a la gente como a un policia.";
}

Policia::Policia() = default;

Policia::Policia(string nombre) : nombre(std::move(nombre)) {}

Policia::~Policia() = default;

ostream &operator<<(ostream &os, const Policia &policia) {
    os << "[Policia] nombre: " << policia.nombre;
    return os;
}
