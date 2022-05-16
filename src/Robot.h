//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_ROBOT_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_ROBOT_H
#include <iostream>
#include <sstream>
using namespace std;

class Robot {
protected:
    double nivelDeBateria;
    int numSensores;
public:
    Robot();

    Robot(double nivelDeBateria, int numSensores);

    virtual ~Robot();

    double getNivelDeBateria() const;

    void setNivelDeBateria(double nivelDeBateria);

    int getNumSensores() const;

    void setNumSensores(int numSensores);

    virtual string seConfigura();
    virtual string seRecarga();

    friend ostream &operator<<(ostream &os, const Robot &robot);
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_ROBOT_H
