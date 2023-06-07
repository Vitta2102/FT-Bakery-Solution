#ifndef MILK_HPP
#define MILK_HPP

#include <string>
#include "Food.hpp"
#include "Liquid.hpp"

using namespace std;

class Milk : public Liquid 
{
    private:
    string tipo;

    public:
    Milk(string, int, string, double);
    virtual string getDescricao();
};

#endif