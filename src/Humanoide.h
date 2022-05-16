//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDE_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDE_H
#include <iostream>
#include <sstream>
#include "RoboCop.h"
#include "Guerrero.h"

using namespace std;

class Humanoide : public RoboCop, public Guerrero {
private:
    double velocidad{};
public:
    Humanoide();

    Humanoide(double velocidad);

    virtual ~Humanoide();

    double getVelocidad() const;

    void setVelocidad(double velocidad);

    string corre() const;

    virtual int setValor(double val) = 0;
    virtual string toString() = 0;

    friend ostream &operator<<(ostream &os, const Humanoide &humanoide);
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDE_H
