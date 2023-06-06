#ifndef SODA_HPP
#define SODA_HPP

#include <string>
#include "Liquido.hpp"

using namespace std;

class Soda : public Liquido 
{
    private:
    std::string tipo;

    public:
    Soda(std::string tipo, int ml, std::string recipiente, double valor);
    std::string getDescricao();
};

#endif