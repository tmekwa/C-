#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
#include <cstdlib>

class Contact{

    private:
            std::string fname;
            std::string lname;
            std::string nname;
            std::string pnumber;

    public:
        Contact();
        ~Contact();
        void setFname(std::string firstname);        
	void setLName(std::string lastname);
        void setNName(std::string nickname);
        void setPNumber(std::string number);
        std::string  getFname();
        std::string getLName();
        std::string getNName();
        std::string getPNumber();
        int searchContact(Contact *contactList, Contact *searchResult, std::string search, int i);
        Contact addContact(void);
        void displayOptions(void);
        std::string validatePhoneNumber(std::string pnumber);
        std::string strToUpper(std::string str);
        //void Contact::displayResults(Contact *searchResult);
};

#endif