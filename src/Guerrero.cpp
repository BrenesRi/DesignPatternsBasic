//
// Created by Maikol Guzman Alan on 4/8/22.
//

#include "Guerrero.h"

#include <utility>

Guerrero::Guerrero() {
    this->color = "Negro plateado";
};

Guerrero::~Guerrero() = default;
Guerrero::Guerrero(string color) : color(std::move(color)) {}

const string &Guerrero::getColor() const {
    return color;
}

void Guerrero::setColor(const string &color) {
    Guerrero::color = color;
}

string Guerrero::seDefiende() {
    return "Como guerrero me defiendo como gato panza arriba.";
}

string Guerrero::ataca() {
    return "Como guerrero me encanta atacar.";
}

string Guerrero::muere() {
    return "Ahhhhhh, muero, hoy es buen día para morir.";
}

ostream &operator<<(ostream &os, const Guerrero &guerrero) {
    os << "[Guerrero] color: " << guerrero.color;
    return os;
}

