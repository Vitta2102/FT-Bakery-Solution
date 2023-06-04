/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Comida.hpp"
#include "Pão.hpp"

using namespace std;

Bread::Bread(string tipo, float peso, double valor) : Food(valor)
   {
   this->tipo = tipo;
   this->peso = peso;
   };
   
string Bread::getDescricao()
   { 
   return ("Pao " + tipo + " - " + to_string(peso) + " Kg."); 
   };
   
/* fim de arquivo */