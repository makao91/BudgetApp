#ifndef FILEWITHEXPENSES_H
#define FILEWITHEXPENSES_H

#include <iostream>
#include <vector>
#include "Markup.h"
#include "Expense.h"
#include "UsefullMethods.h"


using namespace std;

class FileWithExpenses
{
CMarkup xml;

public:
    void appendExpenseToFile(Expense expense);
    vector <Expense> loadExpensesFromFile ();
};
#endif
