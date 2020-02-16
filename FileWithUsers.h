#ifndef FILEWITHUSERS_H
#define FILEWITHUSERS_H

#include <iostream>
#include <vector>
#include <cstdlib>


#include "User.h"
#include "UsefullMethods.h"
#include "Markup.h"

using namespace std;

class FileWithUsers
{

const string NAME_OF_FILE_WITH_USERS;
CMarkup xml;

public:

    FileWithUsers(string NAMEOFFILEWITHUSERS) : NAME_OF_FILE_WITH_USERS(NAMEOFFILEWITHUSERS){};
    void appendUserToFile(User user);
    vector <User> loadUsersFromFile ();

};
#endif
