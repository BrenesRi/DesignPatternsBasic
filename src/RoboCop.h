//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_ROBOCOP_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_ROBOCOP_H
#include <iostream>
#include <sstream>
#include "Policia.h"
#include "Robot.h"
#include "Armadura.h"

using namespace std;

class RoboCop : public Policia, public Robot {
private:
    Armadura* armadura{};
    string numSerie;
    int nivelDeDano{};
    int codigoDeArmadura{};
public:
    RoboCop();

    RoboCop(string numSerie, int nivelDeDano, int codigoDeArmadura);

    virtual ~RoboCop();

    static string dispara();
    static string detiene();

    Armadura *getArmadura() const;

    void setArmadura(Armadura *armadura);

    const string &getNumSerie() const;

    void setNumSerie(const string &numSerie);

    int getNivelDeDano() const;

    void setNivelDeDano(int nivelDeDano);

    int getCodigoDeArmadura() const;

    void setCodigoDeArmadura(int codigoDeArmadura);

    string seConfigura() override;
    string seRecarga() override;

    friend ostream &operator<<(ostream &os, const RoboCop &cop);
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_ROBOCOP_H
