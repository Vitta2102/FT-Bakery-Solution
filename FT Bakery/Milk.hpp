#ifndef MILK_HPP
#define MILK_HPP

#include <string>
#include "Liquido.hpp"

using namespace std;

class Milk : public Liquido 
{
    private:
    std::string tipo;

    public:
    Milk(std::string tipo, int ml, std::string recipiente, double valor);
    std::string getDescricao();
};

#endif