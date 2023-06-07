#include <string>
#include "Food.hpp"
#include "Cheese.h"
#include "CottageCheese.h"

using namespace std;

CottageCheese::CottageCheese(string tipo, float peso, double valor) : Cheese(tipo, peso, valor)
{
	this->tipo = tipo;
	this->peso = peso;
}

string CottageCheese::getDescricao()
{
	return ("Cottage Cheese " + tipo + " - " + to_string(peso) + " Kg.");
}