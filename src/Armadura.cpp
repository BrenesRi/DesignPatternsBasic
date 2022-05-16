//
// Created by Maikol Guzman Alan on 4/8/22.
//

#include "Armadura.h"

Armadura::Armadura() = default;

Armadura::~Armadura() = default;

string Armadura::tipoDeMetal(int codDeArmadura) {
    string tipoMetal;
    switch (codDeArmadura) {
        case 1 :
            tipoMetal = "Aluminio";
            break;
        case 2 :
            tipoMetal = "Titanio";
            break;
        case 3 :
            tipoMetal = "Acero";
            break;
        case 4 :
            tipoMetal = "Oro";
            break;
    }
    return tipoMetal;
}

int Armadura::nivelDeResistenciaMax(int codDeArmadura) {
    int resistenciaMax;
    switch (codDeArmadura) {
        case 1 :
            resistenciaMax = 50;
            break;
        case 2 :
            resistenciaMax = 95;
            break;
        case 3 :
            resistenciaMax = 85;
            break;
        case 4 :
            resistenciaMax = 70;
            break;
    }
    return resistenciaMax;
}

double Armadura::valorEnDolares(int codDeArmadura) {
    double valorDolares;
    switch (codDeArmadura) {
        case 1 :
            valorDolares = 2.5;
            break;
        case 2 :
            valorDolares = 3.4;
            break;
        case 3 :
            valorDolares = 2.9;
            break;
        case 4 :
            valorDolares = 1.7;
            break;
    }
    return valorDolares;
}


