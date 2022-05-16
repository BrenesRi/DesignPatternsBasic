//
// Created by Maikol Guzman Alan on 4/8/22.
//

#include "Robot.h"

Robot::Robot() {
    this->nivelDeBateria = 100;
    this->numSensores = 2000;
}

Robot::Robot(double nivelDeBateria, int numSensores) : nivelDeBateria(nivelDeBateria), numSensores(numSensores) {}

double Robot::getNivelDeBateria() const {
    return nivelDeBateria;
}

void Robot::setNivelDeBateria(double nivelDeBateria) {
    Robot::nivelDeBateria = nivelDeBateria;
}

int Robot::getNumSensores() const {
    return numSensores;
}

void Robot::setNumSensores(int numSensores) {
    Robot::numSensores = numSensores;
}

string Robot::seConfigura() {
    return "Yo, como robot me puedo configurar.";
}

string Robot::seRecarga() {
    return "Yo, como robot busco como recargar la bateria";
}

Robot::~Robot() = default;

ostream &operator<<(ostream &os, const Robot &robot) {
    os << "[Robot] nivelDeBateria: " << robot.nivelDeBateria << ", numSensores: " << robot.numSensores;
    return os;
}
