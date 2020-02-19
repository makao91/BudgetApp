#include "Budget.h"

void Budget::registration()
{
    userMenager.userRegistration();
}
void Budget::logIn()
{
    userMenager.userLogin();
}
bool Budget::isAnyUserLogin()
{
    return userMenager.isAnyUserLogin();
}
void Budget::appendNewExpense()
{

    if (userMenager.isAnyUserLogin())
    {
        expenseMenager = new ExpenseMenager(userMenager.getIdOffLoggedUser());
        expenseMenager->registrationOfNewExpense();
    }
     else
        {
            cout<<"You need to log in first."<<endl;
            system("pause");
        }
}
void Budget::appendNewIncome()
{
     if (userMenager.isAnyUserLogin())
    {
        incomeMenager = new IncomeMenager(userMenager.getIdOffLoggedUser());
        incomeMenager->registrationOfNewIncome();
    }
     else
        {
            cout<<"You need to log in first."<<endl;
            system("pause");
        }
}
