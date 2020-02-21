#ifndef INCOMEMENAGER_H
#define INCOMEMENAGER_H

#include <iostream>
#include "UsefullMethods.h"
#include "MoneyOccurence.h"
#include "FileWithIncomes.h"


using namespace std;

class IncomeMenager : public MoneyOccurence
{
protected:
    int idLoggedUser;
    FileWithIncomes fileWithIncomes;
    //int incomeId;
    vector <Income> incomes;
    void saveMoneyOccurenceToFile ();
    int getIdForNewIncome();
    Income addMoneyOccurence ();

    public:
IncomeMenager(int userId)
{
    idLoggedUser = userId;
    incomes=fileWithIncomes.loadIncomesFromFile();
};

void registrationOfNewIncome();
vector <Income> getIncomeData();

};
#endif
