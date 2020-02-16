#ifndef USERMENAGER_H
#define USERMENAGER_H

#include <iostream>
#include <vector>
#include <windows.h>

#include "User.h"
#include "FileWithUsers.h"

using namespace std;

class UserMenager
{
    vector <User> users;
    FileWithUsers fileWithUsers;
    int idLoggedUser;
    User giveDataOfNewUser ();
    bool isThatLoginExist (string login);

    public:

    UserMenager ( string nameOfFileWithUsers) : fileWithUsers(nameOfFileWithUsers)
    {
        idLoggedUser=0;
        users = fileWithUsers.loadUsersFromFile();
    };
    int getIdForNewUser ();
    void userRegistration ();
    int userLogin();
    int userLogOut();
    void changeLoggedUsersPassword();
    void saveAllUsersToFile(vector <User> &users);
    int getIdOffLoggedUser ();
    bool isAnyUserLogin();

};
#endif
