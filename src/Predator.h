//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_PREDATOR_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_PREDATOR_H

#include <ostream>
#include "Humanoide.h"

class Predator : public Humanoide {
private:
    double peso{};
public:
    Predator();

    Predator(double peso);

    virtual ~Predator();

    double getPeso() const;

    void setPeso(double peso);

    int setValor(double val) override;
    string toString() override;

    friend ostream &operator<<(ostream &os, const Predator &predator);
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_PREDATOR_H
