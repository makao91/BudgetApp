#ifndef FILEWITHUSERS_H
#define FILEWITHUSERS_H

#include <iostream>
#include <vector>
#include <cstdlib>
//#include <fstream>

#include "User.h"
#include "UsefullMethods.h"
#include "Markup.h"

using namespace std;

class FileWithUsers
{

const string NAME_OF_FILE_WITH_USERS;
CMarkup xml;
User getUserData(string dataOfOneUserDividedWithVerticalLines);


public:

    FileWithUsers(string NAMEOFFILEWITHUSERS) : NAME_OF_FILE_WITH_USERS(NAMEOFFILEWITHUSERS){};
    void appendUserToFile(User user);
    vector <User> loadUsersFromFile ();
    void saveAllUsersToFile(vector<User>&users);
};
#endif
