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
