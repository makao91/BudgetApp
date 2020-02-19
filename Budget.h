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

    ExpenseMenager *expenseMenager;
    IncomeMenager *incomeMenager;

public:
    Budget (string nameOfFileWithUsers) : userMenager(nameOfFileWithUsers)
    {
        incomeMenager = NULL;
        expenseMenager = NULL;
    };
    ~Budget()
    {
        delete expenseMenager;
        delete incomeMenager;
        incomeMenager = NULL;
        expenseMenager = NULL;
    };
    void registration();
    void logIn();
    bool isAnyUserLogin();
    void appendNewExpense();
    void appendNewIncome();
    void userLogOut ();
    void changeLoggedUsersPassword ();

};
#endif
