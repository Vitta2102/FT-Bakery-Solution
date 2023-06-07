#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 
#include "MyProgram.hpp"
#include "Food.hpp"
#include "Menu.hpp"
#include "Decoracao.hpp"
#include "a02ex01_a.hpp" 
#include "Bread.hpp"
#include "Cheese.h"
#include "CottageCheese.h"
#include "Ham.h"
#include "Mortadella.h"
#include "Cracker.hpp"
#include "FilledWaffer.hpp"
#include "Water.hpp"
#include "Milk.hpp"
#include "Soda.hpp"
#include "Beer.hpp"
#include "Liquid.hpp"
#include "Skol.hpp"
#include "Heineken.hpp"
#include "Budweiser.hpp"
#include "Brahma.hpp"

using namespace std;

MyProgram::MyProgram() : verboseMode(nullptr), shortMessageMode(nullptr) {}

MyProgram::~MyProgram() {
    clearAll();
    delete verboseMode;
    delete shortMessageMode;
}

void MyProgram::start(int argc, char* argv[])
{
    myMainList.clear();
    Information::wellcome("C++ Program " + string(argv[0]) + " running!", shortMessageMode->getStatus());
    process();
    Information::bye(shortMessageMode->getStatus());
    clearAll();
}

void MyProgram::process() 
{
    vector<string> opcoes({ "Exit", "List Database", "Insert Items" });
    Menu menu("Main Menu", opcoes);
    int escolha = -1;

    while (escolha != 0) {
        escolha = menu.getEscolha();

        switch (escolha) {
        case 1: {
            listItems();
            break;
        }
        case 2: {
            insertItems();
            break;
        }
        }
    }
}

void MyProgram::clearAll() {

    myMainList.clear();

    vector<Food*>::iterator scan = myMainList.begin();

    while(scan != myMainList.end()) {
        delete (*scan);
        *scan = NULL;
        scan++;
    }
}

void MyProgram::listItems() {
    double total = 0.00;

    cout << "------------------------------\nItems in Database:\n------------------------------\n";
    vector<Food*>::iterator scan = myMainList.begin();

    while (scan != myMainList.end()) {
        cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl;
        total += (*scan)->getValor();
        scan++;
    }
    cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
}

void MyProgram::insertItems() {
    cout << "------------------------------\nInset New Items:\n------------------------------\n";

    Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella", "Water", "Milk", "Soda", "Beer" });
    int escolha = -1;

    Menu beerMenu("Choose your beer", { "Exit", "Skol", "Heineken", "Budweiser", "Brahma" });
    int chooseBeer = -1;

    while (escolha) {
        escolha = menu.getEscolha();

        switch (escolha) {
        case 1: {
            insertBread();
            break;
        }
        case 2: {
            insertCheese();
            break;
        }
        case 3: {
            insertCottageCheese();
            break;
        }
        case 4: {
            insertCracker();
            break;
        }
        case 5: {
            insertFilledWaffer();
            break;
        }
        case 6: {
            insertHam();
            break;
        }
        case 7: {
            insertMortadella();
            break;
        }
        case 8: {
            insertWater();
            break;
        }
        case 9: {
            insertMilk();
            break;
        }
        case 10: {
            insertSoda();
            break;
        }
        case 11: {
            while (chooseBeer) {
                chooseBeer = beerMenu.getEscolha();
                switch (chooseBeer)
                {
                    case 1: {
                        insertSkol();
                        break;
                    }
                    case 2: {
                        insertHeineken();
                        break;
                    }
                    case 3: {
                        insertBudweiser();
                        break;
                    }
                    case 4: {
                        insertBrahma();
                        break;
                    }
                }
                break;
                }
            }
        }
    }
}

void MyProgram::insertBread() {
    Bread* bread;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Bread:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    bread = new Bread(type, weight, cost);
    myMainList.insert(myMainList.end(), bread);

    cout << endl
        << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getValor() << endl;
}

void MyProgram::insertCheese() {
    Cheese* cheese;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cheese = new Cheese(type, weight, cost);
    myMainList.insert(myMainList.end(), cheese);

    cout << endl
        << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getValor() << endl;
}

void MyProgram::insertCottageCheese() {
    CottageCheese* cottageCheese;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stod(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cottageCheese = new CottageCheese(type, weight, cost);
    myMainList.insert(myMainList.end(), cottageCheese);

    cout << endl
        << cottageCheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cottageCheese->getValor() << endl;
}

void MyProgram::insertCracker() {
    Cracker* cracker;
    string buffer;
    string type;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    cracker = new Cracker(type, amount, cost);
    myMainList.insert(myMainList.end(), cracker);

    cout << endl
        << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getValor() << endl;
}

void MyProgram::insertFilledWaffer() {
    FilledWaffer * filledWaffer;
    string buffer;
    string type;
    string filling;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Filling ...: ";
    getline(cin, filling);
    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    filledWaffer = new FilledWaffer(type, filling, amount, cost);
    myMainList.insert(myMainList.end(), filledWaffer);

    cout << endl
        << filledWaffer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWaffer->getValor() << endl;
}

void MyProgram::insertHam() {
    Ham* ham;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Ham:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    ham = new Ham(type, weight, cost);
    myMainList.insert(myMainList.end(), ham);

    cout << endl
        << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getValor() << endl;
}

void MyProgram::insertMortadella() {
    Mortadella* mortadella;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    mortadella = new Mortadella(type, weight, cost);
    myMainList.insert(myMainList.end(), mortadella);

    cout << endl
        << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor() << endl;
}

void MyProgram::insertWater() {
    Water* water;
    string buffer;
    string type;
    string container;
    float ml;
    double cost;

    cout << "------------------------------\nInsert Water:\n------------------------------\n";
    cout << "mL ......: ";
    getline(cin, buffer);
    ml = stod(buffer);
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Container ....: ";
    getline(cin, buffer);
    container = buffer;
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    water = new Water(type, ml, container, cost);
    myMainList.insert(myMainList.end(), water);

    cout << endl
        << water->getDescricao() << " - US$ " << fixed << setprecision(2) << water->getValor() << endl;
}

void MyProgram::insertMilk() {
    Milk* milk;
    string buffer;
    string type;
    string container;
    float ml;
    double cost;

    cout << "------------------------------\nInsert Milk:\n------------------------------\n";
    cout << "mL ......: ";
    getline(cin, buffer);
    ml = stod(buffer);
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Container ....: ";
    getline(cin, buffer);
    container = buffer;
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    milk = new Milk(type, ml, container, cost);
    myMainList.insert(myMainList.end(), milk);

    cout << endl
        << milk->getDescricao() << " - US$ " << fixed << setprecision(2) << milk->getValor() << endl;
}

void MyProgram::insertSoda() {
    Soda* soda;
    string buffer;
    string type;
    string container;
    float ml;
    double cost;

    cout << "------------------------------\nInsert Soda:\n------------------------------\n";
    cout << "mL ......: ";
    getline(cin, buffer);
    ml = stod(buffer);
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;
    cout << "Container ....: ";
    getline(cin, buffer);
    container = buffer;
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    soda = new Soda(type, ml, container, cost);
    myMainList.insert(myMainList.end(), soda);

    cout << endl
        << soda->getDescricao() << " - US$ " << fixed << setprecision(2) << soda->getValor() << endl;
}


void MyProgram::insertSkol() {
    Skol* skol;
    string buffer;
    float teor;
    string container;
    float ml;
    double cost;

    cout << "------------------------------\nInsert Skol:\n------------------------------\n";
    cout << "mL ......: ";
    getline(cin, buffer);
    ml = stod(buffer);
    cout << "Alcohol Content ......: ";
    getline(cin, buffer);
    teor = stod(buffer);
    cout << "Container ....: ";
    getline(cin, buffer);
    container = buffer;
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    skol = new Skol(teor, ml, container, cost);
    myMainList.insert(myMainList.end(), skol);

    cout << endl
        << skol->getDescricao() << " - US$ " << fixed << setprecision(2) << skol->getValor() << endl;
}

void MyProgram::insertHeineken() {
    Heineken* heineken;
    string buffer;
    float teor;
    string container;
    float ml;
    double cost;

    cout << "------------------------------\nInsert Heineken:\n------------------------------\n";
    cout << "mL ......: ";
    getline(cin, buffer);
    ml = stod(buffer);
    cout << "Alcohol Content ......: ";
    getline(cin, buffer);
    teor = stod(buffer);
    cout << "Container ....: ";
    getline(cin, buffer);
    container = buffer;
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    heineken = new Heineken(teor, ml, container, cost);
    myMainList.insert(myMainList.end(), heineken);

    cout << endl
        << heineken->getDescricao() << " - US$ " << fixed << setprecision(2) << heineken->getValor() << endl;
}

void MyProgram::insertBudweiser() {
    Budweiser* budweiser;
    string buffer;
    float teor;
    string container;
    float ml;
    double cost;

    cout << "------------------------------\nInsert Budweiser:\n------------------------------\n";
    cout << "mL ......: ";
    getline(cin, buffer);
    ml = stod(buffer);
    cout << "Alcohol Content ......: ";
    getline(cin, buffer);
    teor = stod(buffer);
    cout << "Container ....: ";
    getline(cin, buffer);
    container = buffer;
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    budweiser = new Budweiser(teor, ml, container, cost);
    myMainList.insert(myMainList.end(), budweiser);

    cout << endl
        << budweiser->getDescricao() << " - US$ " << fixed << setprecision(2) << budweiser->getValor() << endl;
}

void MyProgram::insertBrahma() {
    Brahma* brahma;
    string buffer;
    float teor;
    string container;
    float ml;
    double cost;

    cout << "------------------------------\nInsert Brahma:\n------------------------------\n";
    cout << "mL ......: ";
    getline(cin, buffer);
    ml = stod(buffer);
    cout << "Alcohol Content ......: ";
    getline(cin, buffer);
    teor = stod(buffer);
    cout << "Container ....: ";
    getline(cin, buffer);
    container = buffer;
    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);
    cin.clear();

    brahma = new Brahma(teor, ml, container, cost);
    myMainList.insert(myMainList.end(), brahma);

    cout << endl
        << brahma->getDescricao() << " - US$ " << fixed << setprecision(2) << brahma->getValor() << endl;
}


