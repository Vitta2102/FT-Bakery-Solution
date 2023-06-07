#ifndef SODA_HPP
#define SODA_HPP

#include <string>
#include "Food.hpp"
#include "Liquid.hpp"

using namespace std;

class Soda : public Liquid 
{
    private:
    string tipo;

    public:
    Soda(string, int, string, double);
    virtual string getDescricao();
};

#endif