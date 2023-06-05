#include <string>
#include "Beer.hpp"

using namespace std;

Beer::Beer(string tipo, int ml, string recipiente, double valor) : Liquid(ml, recipiente)
{
    this->tipo = tipo;
    this->ml = ml;
    this->recipiente = recipiente;
    this->valor = valor;
}
string Beer::getDescricao()
{
    return("Cerveja "+tipo+" - "+ recipiente +to_string(ml)+" Ml.");
};