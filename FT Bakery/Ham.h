#pragma once
#ifndef HAM_H
#define HAM_H

#include <string>
#include "Food.hpp"

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