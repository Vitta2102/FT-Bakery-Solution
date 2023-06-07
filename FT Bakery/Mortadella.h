#pragma once
#ifndef A02EX03_I_H
#define A02EX03_I_H

#include <string>
#include "Food.hpp"

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
