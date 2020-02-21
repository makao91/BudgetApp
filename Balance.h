#ifndef BALANCE_H
#define BALANCE_H

#include <iostream>
#include "IncomeMenager.h"
#include "ExpenseMenager.h"



using namespace std;

class Balance:  public ExpenseMenager, public IncomeMenager
{


public:
    Balance(int idLogUser):ExpenseMenager(idLogUser), IncomeMenager(idLogUser){};

    void balanceCurrentMonth();
    void balanceOfPreviousMonth();
};
#endif
