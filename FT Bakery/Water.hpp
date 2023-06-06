#ifndef WATER_HPP
#define WATER_HPP

#include <string>
#include "Liquido.hpp"

using namespace std;

class Water : public Liquido 
{
    private:
    std::string tipo;

    public:
    Water(std::string tipo, int ml, std::string recipiente, double valor);
    std::string getDescricao();
};

#endif