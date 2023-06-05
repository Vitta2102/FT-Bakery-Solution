#include <string>
#include "Cerveja.hpp"

using namespace std;

Cerveja::Cerveja(string tipo, int ml, string recipiente, double valor) : Liquido(ml, recipiente)
{
    this->tipo = tipo;
    this->ml = ml;
    this->recipiente = recipiente;
    this->valor = valor;
}
string Cerveja::getDescricao()
{
    return("Cerveja "+tipo+" - "+ recipiente +to_string(ml)+" Ml.");
};