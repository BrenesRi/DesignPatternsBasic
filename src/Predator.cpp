//
// Created by Maikol Guzman Alan on 4/8/22.
//

#include "Predator.h"

Predator::Predator(double peso) : peso(peso) {}

Predator::Predator() = default;

Predator::~Predator() = default;

double Predator::getPeso() const {
    return peso;
}

void Predator::setPeso(double peso) {
    Predator::peso = peso;
}

ostream &operator<<(ostream &os, const Predator &predator) {
    os << static_cast<const Humanoide &>(predator) << ", peso: " << predator.peso;
    return os;
}

int Predator::setValor(double val) {
    return val;
}

string Predator::toString() {
    stringstream ss;
    ss << "[--------------------------------------Soy Predator---------------------------]";
    return ss.str();
}
