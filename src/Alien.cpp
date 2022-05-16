//
// Created by Maikol Guzman Alan on 4/8/22.
//

#include "Alien.h"

Alien::Alien() = default;

Alien::Alien(double estatura) : estatura(estatura) {}

double Alien::getEstatura() const {
    return estatura;
}

void Alien::setEstatura(double estatura) {
    Alien::estatura = estatura;
}

Alien::~Alien() = default;

ostream &operator<<(ostream &os, const Alien &alien) {
    os << static_cast<const Humanoide &>(alien) << ", estatura: " << alien.estatura;
    return os;
}

int Alien::setValor(double val) {
    return val;
}

string Alien::toString() {
    stringstream ss;
    ss << (*this);
    return ss.str();
}
