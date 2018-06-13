#include "contact.hpp"

int main(void){

    Contact contact;
    int counter;
    Contact contactlist[8];
    Contact searchResult[8];
    std::string casedOption;
    int i;
    std::string input;

    int searchResultList;
    std::string search;

    i = -1;
    counter = 0;
    while (1)
    {
        std:: cout << "welcome to my awesome phone book:" << std::endl;
        std:: cout << "Add\t\t\t" << "Search\t\t\t" << "Exit" << std::endl;
        std:: cin >> input;

        
        if (input.compare("Add") == 0)
        {
            if (i++ <= 8)
            {
                contactlist[i] = contact.addContact();
            }
            else
            {
                continue ;
            }
        }
        else if (input.compare("Search") == 0)
        {

            std:: cout << "search for:" << std::endl;
            std::cin >> search;
            searchResultList = 0;
            searchResultList = contact.searchContact(contactlist, searchResult ,search, i);
            if (searchResultList > 0)
            {
                std:: cout << "Index\t" << "|\t" << "First name\t"<< "|\t" << "Last name\t" << "|\t" << "Phone number" << std::endl;
                while (searchResultList > -1)
                {
                    std:: cout << counter << '\t';
                    std:: cout << searchResult[searchResultList].getFname() << '\t';
                    std::cout << searchResult[searchResultList].getLName() << '\t';
                    std::cout << searchResult[searchResultList].getNName() << '\t';
                    std::cout << searchResult[searchResultList].getPNumber() << '\t';                                                            
                    searchResultList--;
                    counter++;
                    std::cout << std::endl;
                }
            }
            else
            {
                std::cout << "No results found" << std::endl;
            }
        }
        else if (input.compare("Exit") == 0){
            exit(1);
        }
    }
    return 0;
}