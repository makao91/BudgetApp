#ifndef FILEWITHINCOMES_H
#define FILEWITHINCOMES_H

#include <iostream>
#include <vector>
#include "Markup.h"
#include "Income.h"
#include "UsefullMethods.h"

using namespace std;

class FileWithIncomes
{
CMarkup xml;

public:

    void appendIncomeToFile(Income income);
    vector <Income> loadIncomesFromFile ();

};
#endif
