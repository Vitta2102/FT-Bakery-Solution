#ifndef A02EX03_F_H
#define A02EX03_F_H

#include <string>
#include "Food.hpp"

using namespace std;

class Cheese : public Food
{
protected:
     string tipo;
     double peso;

public:
    Cheese(string, float, double);
    virtual string getDescricao();
};

#endif
