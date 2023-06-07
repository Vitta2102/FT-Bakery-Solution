#pragma once
#ifndef LIQUID_H
#define LIQUID_H

#include <string>
#include "Food.hpp"

using namespace std;

class Liquid : public Food
{
    protected:
    float ml;
    string recipiente;

    public:
    Liquid(float, string, double);
};

#endif