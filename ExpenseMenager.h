#ifndef EXPENSEMENAGER_H
#define EXPENSEMENAGER_H

#include <iostream>
#include <vector>
#include "UsefullMethods.h"
#include "MoneyOccurence.h"
#include "FileWithExpenses.h"

using namespace std;

class ExpenseMenager : public MoneyOccurence
{
protected:
    int idLoggedUser;
    FileWithExpenses fileWithExpenses;
    vector <Expense> expenses;
    int getIdForNewExpense();
    Expense addMoneyOccurence ();

public:
    ExpenseMenager(int userId)
{
    idLoggedUser = userId;
    expenses=fileWithExpenses.loadExpensesFromFile();
};
void registrationOfNewExpense();
vector <Expense> getExpenseData();
};
#endif
