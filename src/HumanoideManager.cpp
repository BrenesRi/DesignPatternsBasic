//
// Created by Maikol Guzman Alan on 4/8/22.
//

#include "HumanoideManager.h"
#include "Alien.h"
#include "Predator.h"

HumanoideManager::HumanoideManager() = default;

HumanoideManager::~HumanoideManager() = default;

ostream &operator<<(ostream &os, const HumanoideManager &manager) {
    // os << "humanoideLista: " << manager.humanoideLista;
    return os;
}

void HumanoideManager::ingresaHumanoide(Humanoide *humanoide) {
    humanoideLista.push_back(humanoide);
}

string HumanoideManager::retornaSoloAliens() {
    string sAliens;
    for (auto humanoide: humanoideLista) {
        Alien *alien = dynamic_cast<Alien *>(humanoide);
        if (alien) {
            stringstream ss;
            ss << (*alien) << "---";
            sAliens += ss.str();
        }
    }
    return sAliens;
}

string HumanoideManager::retornaTodos() {
    string sHumanoides;
    for (auto humanoide: humanoideLista) {
        Alien *alien = dynamic_cast<Alien *>(humanoide);
        Predator *predator = dynamic_cast<Predator *>(humanoide);

        if (alien) {
            stringstream ss;
            ss << (*alien) << "---";
            sHumanoides += ss.str();
        } else if (predator) {
            stringstream ss;
            ss << (*predator) << "---";
            sHumanoides += ss.str();
        }
    }
    return sHumanoides;
}

const vector<Humanoide *> &HumanoideManager::getHumanoideLista() const {
    return humanoideLista;
}

void HumanoideManager::setHumanoideLista(const vector<Humanoide *> &humanoideLista) {
    HumanoideManager::humanoideLista = humanoideLista;
}