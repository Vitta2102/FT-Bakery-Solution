#ifndef WATER_HPP
#define WATER_HPP

#include <string>
#include "Food.hpp"
#include "Liquid.hpp"

using namespace std;

class Water : public Liquid 
{
private:
    std::string tipo;

public:
    Water(string, float, string, double);
    virtual string getDescricao();
};

#endif