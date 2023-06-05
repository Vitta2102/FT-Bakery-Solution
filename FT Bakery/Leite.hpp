#ifndef LEITE_HPP
#define LEITE_HPP

#include <string>
#include "Liquido.hpp"

using namespace std;

class Leite : public Liquido 
{
    private:
    std::string tipo;

    public:
    Leite(std::string tipo, int ml, std::string recipiente, double valor);
    std::string getDescricao();
};

#endif