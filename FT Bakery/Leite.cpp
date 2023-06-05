#include <string>
#include "Leite.hpp"

using namespace std;

Leite::Leite(std::string tipo, int ml, std::string recipiente, double valor) : Liquido(ml, recipiente)
{
    this->tipo = tipo;
    this->ml = ml;
    this->recipiente = recipiente;
    this->valor = valor;
}

std::string Leite::getDescricao()
{
    return "Leite " + tipo + " - " + recipiente + std::to_string(ml) + " Ml.";
}
