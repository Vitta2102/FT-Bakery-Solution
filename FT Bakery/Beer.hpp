#pragma once
#ifndef BEER_H
#define BEER_H


#include <string>
#include "Food.hpp"
#include "Liquid.hpp"

using namespace std;

class Beer : public Liquid 
{
    protected: 
    string tipo;

    public:
    Beer(string, int, string, double);
    virtual string getDescricao();
};

#endif