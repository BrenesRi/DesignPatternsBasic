//
// Created by Maikol Guzman Alan on 4/8/22.
//

#include "Humanoide.h"



Humanoide::Humanoide() = default;

Humanoide::Humanoide(double velocidad) : velocidad(velocidad) {}

Humanoide::~Humanoide() = default;
double Humanoide::getVelocidad() const {
    return velocidad;
}

void Humanoide::setVelocidad(double velocidad) {
    Humanoide::velocidad = velocidad;
}
string Humanoide::corre() const {
    return "Como humanoide, me gusta correr a una velocidad de " + to_string(getVelocidad()) + " km/s.";
}

ostream &operator<<(ostream &os, const Humanoide &humanoide) {
    os << static_cast<const RoboCop &>(humanoide) << ' ' << static_cast<const Guerrero &>(humanoide) << ", velocidad: "
       << humanoide.velocidad;
    return os;
}
