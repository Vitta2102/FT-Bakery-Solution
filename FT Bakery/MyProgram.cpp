#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 
#include "MyProgram.hpp"
#include "Comida.hpp"
#include "Menu.hpp"
#include "a02ex01_a.hpp" 

using namespace std;

MyProgram::MyProgram() : verboseMode(nullptr), shortMessageMode(nullptr) {}

MyProgram::~MyProgram() {
    clearAll();
    delete verboseMode;
    delete shortMessageMode;
}

void MyProgram::process() {
    std::vector<std::string> opcoes({ "Exit", "List Database", "Insert Items" });
    Menu menu("Main Menu", opcoes);
    int escolha = -1;

    while (escolha) {
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

    std::vector<Food*>::iterator scan = myMainList.begin();

    while (scan != myMainList.end()) {
        delete (*scan);
        *scan = NULL;
        scan++;
    }
}

void MyProgram::listItems() {
    double total = 0.00;

    std::cout << "------------------------------\nItems in Database:\n------------------------------\n";
    std::vector<Food*>::iterator scan = myMainList.begin();

    while (scan != myMainList.end()) {
        std::cout << "  @ " << std::setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << std::fixed << std::setprecision(2) << (*scan)->getValor() << std::endl;
        total += (*scan)->getValor();
        scan++;
    }
    std::cout << "  Total cost: US$ " << std::fixed << std::setprecision(2) << total << std::endl;
}

void MyProgram::insertItems() {
    std::cout << "------------------------------\nInset New Items:\n------------------------------\n";

    Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella" });
    int escolha = -1;

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
            insertFilledWafer();
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
        }
    }
}

void MyProgram::insertBread() {
    Bread* bread;
    std::string buffer;
    std::string type;
    float weight;
    double cost;

    std::cout << "------------------------------\nInsert Bread:\n------------------------------\n";
    std::cout << "Type ......: ";
    std::getline(std::cin, buffer);
    type = buffer;
    std::cout << "Weight ....: ";
    std::getline(std::cin, buffer);
    weight = std::stof(buffer);
    std::cout << "Cost ......: ";
    std::getline(std::cin, buffer);
    cost = std::stod(buffer);
    std::cin.clear();

    bread = new Bread(type, weight, cost);
    myMainList.insert(myMainList.end(), bread);

    std::cout << std::endl
        << bread->getDescricao() << " - US$ " << std::fixed << std::setprecision(2) << bread->getValor() << std::endl;
}

void MyProgram::insertCheese() {
    Cheese* cheese;
    std::string buffer;
    std::string type;
    float weight;
    double cost;

    std::cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
    std::cout << "Type ......: ";
    std::getline(std::cin, buffer);
    type = buffer;
    std::cout << "Weight ....: ";
    std::getline(std::cin, buffer);
    weight = std::stof(buffer);
    std::cout << "Cost ......: ";
    std::getline(std::cin, buffer);
    cost = std::stod(buffer);
    std::cin.clear();

    cheese = new Cheese(type, weight, cost);
    myMainList.insert(myMainList.end(), cheese);

    std::cout << std::endl
        << cheese->getDescricao() << " - US$ " << std::fixed << std::setprecision(2) << cheese->getValor() << std::endl;
}

void MyProgram::insertCottageCheese() {
    CottageCheese* cottageCheese;
    std::string buffer;
    std::string type;
    float weight;
    double cost;

    std::cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
    std::cout << "Type ......: ";
    std::getline(std::cin, buffer);
    type = buffer;
    std::cout << "Weight ....: ";
    std::getline(std::cin, buffer);
    weight = std::stof(buffer);
    std::cout << "Cost ......: ";
    std::getline(std::cin, buffer);
    cost = std::stod(buffer);
    std::cin.clear();

    cottageCheese = new CottageCheese(type, weight, cost);
    myMainList.insert(myMainList.end(), cottageCheese);

    std::cout << std::endl
        << cottageCheese->getDescricao() << " - US$ " << std::fixed << std::setprecision(2) << cottageCheese->getValor() << std::endl;
}

void MyProgram::insertCracker() {
    Cracker* cracker;
    std::string buffer;
    std::string type;
    int amount;
    double cost;

    std::cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
    std::cout << "Type ......: ";
    std::getline(std::cin, buffer);
    type = buffer;
    std::cout << "Amount ....: ";
    std::getline(std::cin, buffer);
    amount = std::stoi(buffer);
    std::cout << "Cost ......: ";
    std::getline(std::cin, buffer);
    cost = std::stod(buffer);
    std::cin.clear();

    cracker = new Cracker(type, amount, cost);
    myMainList.insert(myMainList.end(), cracker);

    std::cout << std::endl
        << cracker->getDescricao() << " - US$ " << std::fixed << std::setprecision(2) << cracker->getValor() << std::endl;
}

void MyProgram::insertFilledWafer() {
    FilledWafer* filledWafer;
    std::string buffer;
    std::string type;
    int amount;
    double cost;

    std::cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
    std::cout << "Type ......: ";
    std::getline(std::cin, buffer);
    type = buffer;
    std::cout << "Amount ....: ";
    std::getline(std::cin, buffer);
    amount = std::stoi(buffer);
    std::cout << "Cost ......: ";
    std::getline(std::cin, buffer);
    cost = std::stod(buffer);
    std::cin.clear();

    filledWafer = new FilledWafer(type, amount, cost);
    myMainList.insert(myMainList.end(), filledWafer);

    std::cout << std::endl
        << filledWafer->getDescricao() << " - US$ " << std::fixed << std::setprecision(2) << filledWafer->getValor() << std::endl;
}

void MyProgram::insertHam() {
    Ham* ham;
    std::string buffer;
    std::string type;
    float weight;
    double cost;

    std::cout << "------------------------------\nInsert Ham:\n------------------------------\n";
    std::cout << "Type ......: ";
    std::getline(std::cin, buffer);
    type = buffer;
    std::cout << "Weight ....: ";
    std::getline(std::cin, buffer);
    weight = std::stof(buffer);
    std::cout << "Cost ......: ";
    std::getline(std::cin, buffer);
    cost = std::stod(buffer);
    std::cin.clear();

    ham = new Ham(type, weight, cost);
    myMainList.insert(myMainList.end(), ham);

    std::cout << std::endl
        << ham->getDescricao() << " - US$ " << std::fixed << std::setprecision(2) << ham->getValor() << std::endl;
}

void MyProgram::insertMortadella() {
    Mortadella* mortadella;
    std::string buffer;
    std::string type;
    float weight;
    double cost;

    std::cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
    std::cout << "Type ......: ";
    std::getline(std::cin, buffer);
    type = buffer;
    std::cout << "Weight ....: ";
    std::getline(std::cin, buffer);
    weight = std::stof(buffer);
    std::cout << "Cost ......: ";
    std::getline(std::cin, buffer);
    cost = std::stod(buffer);
    std::cin.clear();

    mortadella = new Mortadella(type, weight, cost);
    myMainList.insert(myMainList.end(), mortadella);

    std::cout << std::endl
        << mortadella->getDescricao() << " - US$ " << std::fixed << std::setprecision(2) << mortadella->getValor() << std::endl;
}

void MyProgram::verifyArguments(int argc, char* argv[]) {
    int i = 0;

    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-v") == 0) {
            if (verboseMode == nullptr) {
                verboseMode = new MyBooleanClass();
            }
            verboseMode->setValue(true);
        }

        if (strcmp(argv[i], "-s") == 0) {
            if (shortMessageMode == nullptr) {
                shortMessageMode = new MyBooleanClass();
            }
            shortMessageMode->setValue(true);
        }
    }
}

// Implementação dos métodos get/set para verboseMode e shortMessageMode

void MyProgram::setVerboseMode(bool value) {
    if (verboseMode == nullptr) {
        verboseMode = new MyBooleanClass();
    }
    verboseMode->setValue(value);
}

void MyProgram::setShortMessageMode(bool value) {
    if (shortMessageMode == nullptr) {
        shortMessageMode = new MyBooleanClass();
    }
    shortMessageMode->setValue(value);
}

bool MyProgram::getVerboseMode() {
    if (verboseMode == nullptr) {
        return false;
    }
    return verboseMode->getValue();
}

bool MyProgram::getShortMessageMode() {
    if (shortMessageMode == nullptr) {
        return false;
    }
    return shortMessageMode->getValue();
}