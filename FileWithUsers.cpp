#include "FileWithUsers.h"

void FileWithUsers::appendUserToFile(User user)
{
    xml.ResetPos();
    xml.FindElem();
    xml.IntoElem();
    xml.AddElem("UserData");
    xml.IntoElem();
    xml.AddElem("UserId",user.getId());
    xml.AddElem(user.getLogin(), user.getPassword());
    xml.AddElem(user.getName(),user.getSurname());
    xml.Save("C:\\Users\\Marcin\\Desktop\\Obiektówka\\BudgetApp\\Users.xml");
}

vector <User> FileWithUsers::loadUsersFromFile()
{
    vector <User> users;
    User user;
    if (xml.Load("C:\\Users\\Marcin\\Desktop\\Obiektówka\\BudgetApp\\Users.xml")==false)
    {
        xml.AddElem("Users");
    }
    else
    {
        xml.ResetPos();
        xml.FindElem("Users");
        xml.IntoElem();
        while (xml.FindElem())
        {
            xml.IntoElem();
            xml.FindElem();
            user.setId(UsefullMethods::conversionStringToInt(xml.GetData()));
            xml.FindElem();
            user.setLogin(xml.GetTagName());
            user.setPassword(xml.GetData());
            xml.FindElem();
            user.setName(xml.GetTagName());
            user.setSurname(xml.GetData());
            users.push_back(user);
             xml.OutOfElem();
        }
    }
    return users;
}
void FileWithUsers::changePassword(string login, string newPassword)
{
    xml.ResetPos();
    xml.FindElem("Users");
    xml.IntoElem();
    while (xml.FindElem())
    {
        xml.IntoElem();
        if (xml.FindElem(login))
        {
            xml.RemoveElem();
            xml.AddElem(login, newPassword);
        }
        xml.OutOfElem();
    }
    xml.Save("C:\\Users\\Marcin\\Desktop\\Obiektówka\\BudgetApp\\Users.xml");
    cout<<"Password was succesfully changed."<<endl<<"Press any button to continue."<<endl;
    system("pause");
}
