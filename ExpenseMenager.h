#ifndef EXPENSEMENAGER_H
#define EXPENSEMENAGER_H

#include <iostream>
#include <vector>
//#include "Expense.h"
#include "UsefullMethods.h"
#include "MoneyOccurence.h"
#include "FileWithExpenses.h"



using namespace std;

class ExpenseMenager : public MoneyOccurence
{
private:
    int idLoggedUser;
    FileWithExpenses fileWithExpenses;
    int expenseId;
    vector <Expense> expenses;
    void saveMoneyOccurenceToFile ();
    int getIdForNewExpense();
    Expense addMoneyOccurence ();

    public:
ExpenseMenager(int userId)
{
    idLoggedUser = userId;
    expenses=fileWithExpenses.loadExpensesFromFile();
};

void registrationOfNewExpense();

};
#endif
