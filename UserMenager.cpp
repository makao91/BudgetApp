#include "UserMenager.h"

void UserMenager::userRegistration()
{
    system("cls");
    User user = giveDataOfNewUser();

    users.push_back(user);

    fileWithUsers.appendUserToFile(user);

    cout << endl << "Registration was successful" << endl << endl;
    system("pause");

}
User UserMenager::giveDataOfNewUser()
{
    User user;
    user.setId(getIdForNewUser());

    cout << "Write name: ";
    user.setName(UsefullMethods::loadLines());
    cout << "Write surname: ";
    user.setSurname(UsefullMethods::loadLines());

    do
    {
        cout << "Write login: ";
        user.setLogin(UsefullMethods::loadLines());
    }
    while (isThatLoginExist(user.getLogin()) == true);

    cout << "Write password: ";
    user.setPassword(UsefullMethods::loadLines());
    return user;
}
int UserMenager::getIdForNewUser()
{
    if (users.empty() == true)
        return 1;
    else
        return users.back().getId() + 1;
}
bool UserMenager::isThatLoginExist(string login)
{
    for (int i=0; i<users.size(); i++)
    {
        if (users[i].getLogin()==login)
        {
             cout<<endl<<"User with that login already exist."<<endl;
            return true;
        }

    }
    return false;
}
void UserMenager::saveAllUsersToFile(vector <User> &users)
{
//    fileWithUsers.saveAllUsersToFile(&users);
}
int UserMenager::userLogin()
{
    string login = "", password = "";

    cout << endl << "Write login: ";
    login = UsefullMethods::loadLines();

    for (int i=0; users.size()>i; i++)
    {
        if (users[i].getLogin()==login)
        {
            for (int numberOfTries = 3; numberOfTries > 0; numberOfTries--)
            {
                cout << "Write password. Tries left: " << numberOfTries << ": ";
                password = UsefullMethods::loadLines();

                if (users[i].getPassword()==password)
                {
                    cout << endl << "You are login in." << endl << endl;
                    system("pause");
                    idLoggedUser=users[i].getId();
                    return idLoggedUser;
                }
            }
            cout << "You wrote your password 3 times incorrectly." << endl;
            system("pause");
            return 0;
        }
    }
    cout << "User with that login doesn't exist" << endl << endl;
    system("pause");
    return 0;
}
int UserMenager::userLogOut()
{
    return idLoggedUser=0;
}
void UserMenager::changeLoggedUsersPassword()
{
    string newPassword = "";
    cout << "Write new password: ";
    newPassword = UsefullMethods::loadLines();

    for (int i=0; users.size()>i; i++)
    {
        if (users[i].getId() == idLoggedUser)
        {
            users[i].setPassword(newPassword);
            cout << "Password has been changed." << endl << endl;
            system("pause");
        }
    }
    saveAllUsersToFile(users);
}
int UserMenager::getIdOffLoggedUser()
{
    return idLoggedUser;
}
bool UserMenager::isAnyUserLogin()
{
    if(idLoggedUser>0)
         return true;
    else
        return false;
}
