#pragma once
#ifndef A02EX03_H_H
#define A02EX03_H_H

#include <string>
#include "Comida.hpp"

using namespace std;

class Ham : public Food
{
private:
    string tipo;
    float peso;

public:
    Ham(string, float, double);
    virtual string getDescricao();
};

#endif