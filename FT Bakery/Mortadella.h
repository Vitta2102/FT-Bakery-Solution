#pragma once
#ifndef A02EX03_H_H
#define A02EX03_H_H

#include <string>
#include "Comida.hpp"

using namespace std;

class Mortadella : public Food
{
private:
    string tipo;
    float peso;

public:
    Mortadella(string, float, double);
    virtual string getDescricao();
};

#endif
