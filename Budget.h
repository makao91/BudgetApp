#ifndef BUDGET_H
#define BUDGET_H

#include <iostream>

//#include "Markup.h"
#include "UserMenager.h"
//#include "MoneyOccurence.h"
#include "ExpenseMenager.h"
#include "IncomeMenager.h"


using namespace std;

class Budget
{

UserMenager userMenager;

ExpenseMenager *expenseMenadzer;

public:
    Budget (string nameOfFileWithUsers) : userMenager(nameOfFileWithUsers)
    {

    expenseMenadzer = NULL;
    };
    ~Budget()
    {
       delete expenseMenadzer;


     expenseMenadzer = NULL;
    };
void registration();
void logIn();
bool isAnyUserLogin();
void appendNewExpense();

};
#endif
