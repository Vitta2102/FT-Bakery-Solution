#include <string>
#include "Liquid.hpp"
#include "Water.hpp"

using namespace std;



Water::Water(string tipo, float ml, string recipiente, double valor) : Liquid(ml, recipiente, valor)
{
    this->tipo = tipo;
}

string Water::getDescricao()
{
    return "Water " + tipo + " - " + recipiente + " " + to_string(ml) + " Ml.";
};
