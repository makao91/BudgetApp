#include <iostream>
#include <conio.h>
#include "Budget.h"

using namespace std;

char chooseOptionFromMainMenu();
char chooseOptionFromUserMenu();

int main()
{
    char wybor;
    Budget budget ("Users.xml");

    while (true)
    {
        if (budget.isAnyUserLogin()==false)
        {
            wybor = chooseOptionFromMainMenu();

            switch (wybor)
            {
            case '1':
                budget.registration();
                break;
            case '2':
                budget.logIn();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
             wybor = chooseOptionFromUserMenu();

            switch (wybor)
            {
            case '1':
                budget.appendNewIncome();
                break;
            case '2':
                budget.appendNewExpense();
                break;
            case '3':
                system("cls");
                budget.showBalanceOfCurrentMonth();
                break;
            case '4':
                system("cls");
                budget.showBalanceOfPreviousMonth();
                break;
            case '5':
                system("cls");
                budget.showBalanceOfSpecificTimePeriod();
                break;
            case '6':
                budget.changeLoggedUsersPassword();
                break;
            case '7':
                budget.userLogOut();
                break;
            }
        }

    }

    return 0;
}


char chooseOptionFromMainMenu()
{
    char wybor;

    system("cls");
    cout << "    >>> MAIN MENU <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Registration" << endl;
    cout << "2. Log in" << endl;
    cout << "9. Exit" << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";
    wybor = getch();

    return wybor;
}

char chooseOptionFromUserMenu()
{
    char wybor;

    system("cls");
    cout << " >>> USER MENU <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Add income" << endl;
    cout << "2. Add expense" << endl;
    cout << "3. Balance of current month" << endl;
    cout << "4. Balance of previous month" << endl;
    cout << "5. Balance of some period" << endl;
    cout << "---------------------------" << endl;
    cout << "6. Change password" << endl;
    cout << "7. Log out" << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";
    wybor = getch();

    return wybor;
}
