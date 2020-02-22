#ifndef BUDGET_H
#define BUDGET_H

#include <iostream>

//#include "Markup.h"
#include "UserMenager.h"
//#include "MoneyOccurence.h"
#include "ExpenseMenager.h"
#include "IncomeMenager.h"
#include "Balance.h"


using namespace std;

class Budget
{

    UserMenager userMenager;

    ExpenseMenager *expenseMenager;
    IncomeMenager *incomeMenager;
    Balance *balance;

public:
    Budget (string nameOfFileWithUsers) : userMenager(nameOfFileWithUsers)
    {
        incomeMenager = NULL;
        expenseMenager = NULL;
        balance = NULL;
    };
    ~Budget()
    {
        delete expenseMenager;
        delete incomeMenager;
        delete balance;
        incomeMenager = NULL;
        expenseMenager = NULL;
        balance = NULL;
    };
    void registration();
    void logIn();
    bool isAnyUserLogin();
    void appendNewExpense();
    void appendNewIncome();
    void userLogOut ();
    void changeLoggedUsersPassword ();
    void showBalanceOfCurrentMonth();
    void showBalanceOfPreviousMonth();
    void showBalanceOfSpecificTimePeriod();

};
#endif
