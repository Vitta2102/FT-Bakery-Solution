#include <string>
#include "Soda.hpp"

using namespace std;

Soda::Soda(std::string tipo, int ml, std::string recipiente, double valor) : Liquido(ml, recipiente)
{
    this->tipo = tipo;
    this->ml = ml;
    this->recipiente = recipiente;
    this->valor = valor;
}

std::string Soda::getDescricao()
{
    return "Soda " + tipo + " - " + recipiente + std::to_string(ml) + " Ml.";
}
