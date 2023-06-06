#include <string>
#include "Milk.hpp"

using namespace std;

Milk::Milk(std::string tipo, int ml, std::string recipiente, double valor) : Liquido(ml, recipiente)
{
    this->tipo = tipo;
    this->ml = ml;
    this->recipiente = recipiente;
    this->valor = valor;
}

std::string Milk::getDescricao()
{
    return "Milk " + tipo + " - " + recipiente + std::to_string(ml) + " Ml.";
}
