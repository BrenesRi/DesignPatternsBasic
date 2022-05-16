//
// Created by Maikol Guzman Alan on 4/8/22.
//

#include "RoboCop.h"

#include <utility>

RoboCop::RoboCop() = default;

RoboCop::RoboCop(string numSerie, int nivelDeDano, int codigoDeArmadura) : numSerie(std::move(numSerie)),
                                                                                  nivelDeDano(nivelDeDano),
                                                                                  codigoDeArmadura(codigoDeArmadura) {}

RoboCop::~RoboCop() = default;

Armadura *RoboCop::getArmadura() const {
    return armadura;
}

void RoboCop::setArmadura(Armadura *armadura) {
    RoboCop::armadura = armadura;
}

const string &RoboCop::getNumSerie() const {
    return numSerie;
}

void RoboCop::setNumSerie(const string &numSerie) {
    RoboCop::numSerie = numSerie;
}

int RoboCop::getNivelDeDano() const {
    return nivelDeDano;
}

void RoboCop::setNivelDeDano(int nivelDeDano) {
    RoboCop::nivelDeDano = nivelDeDano;
}

int RoboCop::getCodigoDeArmadura() const {
    return codigoDeArmadura;
}

void RoboCop::setCodigoDeArmadura(int codigoDeArmadura) {
    RoboCop::codigoDeArmadura = codigoDeArmadura;
}

string RoboCop::dispara() {
    return "Como Robocop, me encanta disparar a los malos";
}

string RoboCop::detiene() {
    return "Como Robocop, me encanta detener a los malos";
}

ostream &operator<<(ostream &os, const RoboCop &cop) {
    stringstream ssArmadura;
    ssArmadura << "["
               << "Tipo de metal: " << cop.armadura->tipoDeMetal(cop.codigoDeArmadura)
               << ", Nivel de resistencia: " << cop.armadura->nivelDeResistenciaMax(cop.codigoDeArmadura)
               << ", Valor en dólares: " << cop.armadura->valorEnDolares(cop.codigoDeArmadura)
               << "] ";
    os << static_cast<const Policia &>(cop) << ' ' << static_cast<const Robot &>(cop) << ", armadura: "
       << ssArmadura.str()
       << ", numSerie: " << cop.numSerie << ", nivelDeDano: " << cop.nivelDeDano << ", codigoDeArmadura: "
       << cop.codigoDeArmadura;
    return os;
}

string RoboCop::seConfigura() {
    return "El Robot se Autoconfigura";;
}

string RoboCop::seRecarga() {
    Robot::setNivelDeBateria(100);
    return "El Robot se Auto Recarga a: " + to_string(getNivelDeBateria());
}
