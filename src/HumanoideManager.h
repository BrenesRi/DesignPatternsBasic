//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDEMANAGER_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDEMANAGER_H
#include <iostream>

#include "Humanoide.h"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class HumanoideManager {
private:
    vector<Humanoide *> humanoideLista;
public:
    HumanoideManager();

    virtual ~HumanoideManager();

    const vector<Humanoide *> &getHumanoideLista() const;

    void setHumanoideLista(const vector<Humanoide *> &humanoideLista);

    void ingresaHumanoide(Humanoide* humanoide);
    string retornaSoloAliens();
    string retornaTodos();

    friend ostream &operator<<(ostream &os, const HumanoideManager &manager);
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDEMANAGER_H
