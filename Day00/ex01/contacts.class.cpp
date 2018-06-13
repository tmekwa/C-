#include "contact.hpp"

Contact::Contact(){
  fname = "";
  lname = "";
  nname = "";
  pnumber = "";
}

std::string strToUpper(std::string str)
{
    int i;

    i = 0;
    while(str[i]){
        str[i] = toupper(str[i]);
        i++;
    }
    return str;
}

// void Contact::displayResults(Contact *searchResult);
// {

// }


int Contact::searchContact(Contact *contactList, Contact *searchResult, std::string search, int i)
{
    int searchResultList;

    searchResultList = 0;
    while(i > -1)
    {
        if (contactList[i].getFname().compare(search) == 0 || contactList[i].getLName().compare(search) == 0 || contactList[i].getNName().compare(search) == 0 || contactList[i].getPNumber().compare(search) == 0)
        {
            searchResult[searchResultList] = contactList[i];
            searchResultList += 1;
        }
        i--;
    }
    return searchResultList;
}

Contact Contact::addContact(void){
    Contact addedContact;

    std::string fname;
    std::string lname;
    std::string nname;
    std::string pnumber;
    std::string validatedNumber;

    std::cout << "Please enter firstname:   " << std::endl;
    std::cin >> fname;

    std::cout << "Please enter lastname:   " << std::endl;
    std::cin >> lname;

    std::cout << "Please enter nickname:    " << std::endl;
    std::cin >> nname;

    std::cout << "Please enter phone number:   " << std::endl;
    std::cin >> pnumber;

    addedContact.setFname(fname);
    addedContact.setLName(lname);
    addedContact.setNName(nname);
    addedContact.setPNumber(pnumber);

    std:: cout << "Contact successfully added" << std::endl;

    return (addedContact);
    // std::cout << "Please enter lastname:";
    // std::cin >> lname;
    
}

void Contact::setFname(std::string firstname)
{
    fname = firstname;
}   
void Contact::setLName(std::string lastname)
{
    lname = lastname;
}
void Contact::setNName(std::string nickname)
{
    nname = nickname;
}

void Contact::setPNumber(std::string number)
{
    pnumber = number;
}


std::string  Contact::getFname()
{
    return fname;
}
std::string Contact::getLName()
{
    return lname;
}
std::string Contact::getNName()
{
    return nname;
}  

std::string Contact::getPNumber()
{
    return pnumber;
}

Contact::~Contact(){
}