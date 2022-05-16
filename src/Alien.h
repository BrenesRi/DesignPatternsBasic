//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_ALIEN_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_ALIEN_H

#include <ostream>
#include "Humanoide.h"

class Alien : public Humanoide{
private:
    double estatura{};
public:
    Alien();

    Alien(double estatura);

    virtual ~Alien();

    double getEstatura() const;

    void setEstatura(double estatura);

    int setValor(double val) override;
    string toString() override;

    friend ostream &operator<<(ostream &os, const Alien &alien);
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_ALIEN_H
