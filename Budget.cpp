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
        expenseMenadzer = new ExpenseMenager(userMenager.getIdOffLoggedUser());
        expenseMenadzer->registrationOfNewExpense();
    }
     else
        {
            cout<<"You need to log in first."<<endl;
            system("pause");
        }
}
