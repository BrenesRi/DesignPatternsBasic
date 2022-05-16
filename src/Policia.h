//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef MY_PROJECT_NAME_POLICIA_H
#define MY_PROJECT_NAME_POLICIA_H
#include <iostream>
#include <sstream>
using namespace std;

class Policia {
protected:
    string nombre;
public:
    Policia();

    Policia(string nombre);

    virtual ~Policia();

    const string &getNombre() const;
    void setNombre(const string &nombre);

    static string aprende();
    static string aplicaJusticia();
    static string ayuda();

    friend ostream &operator<<(ostream &os, const Policia &policia);
};


#endif //MY_PROJECT_NAME_POLICIA_H
