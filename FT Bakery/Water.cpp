#include <string>
#include "Water.hpp"

using namespace std;

Water::Water(std::string tipo, int ml, std::string recipiente, double valor) : Liquido(ml, recipiente)
{
    this->tipo = tipo;
    this->ml = ml;
    this->recipiente = recipiente;
    this->valor = valor;
}

std::string Water::getDescricao()
{
    return "Water " + tipo + " - " + recipiente + std::to_string(ml) + " Ml.";
}
