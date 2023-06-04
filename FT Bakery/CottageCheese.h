#ifndef A02EX03_G_H
#define A02EX03_G_H

#include <string>
#include "Comida.hpp"
#include "Cheese.h"

using namespace std;

class CottageCheese : public Cheese
{   

public:
    CottageCheese(string, float, double);
    virtual string getDescricao();
};

#endif
