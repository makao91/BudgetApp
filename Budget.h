#ifndef BUDGET_H
#define BUDGET_H

#include <iostream>

//#include "Markup.h"
#include "UserMenager.h"


using namespace std;

class Budget
{

UserMenager userMenager;

public:
    Budget (string nameOfFileWithUsers) : userMenager(nameOfFileWithUsers)
    {

    };
void registration();
void logIn();

};
#endif
