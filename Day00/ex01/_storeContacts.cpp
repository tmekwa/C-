#include <iostream>
#include <iomanip>

using namespace std;

void addContacts(char *inputNumber)
{
    if (strlen(inputNumber) < 10 || strlen(inputNumber) > 10)
    {
        errorMessage();
    }
    else
    {
        cout << strlen(inputNumber);
    }
}

void errorMessage()
{
    const size_t BUFFER_SIZE = 1024;
    char typeRetry[BUFFER_SIZE];
    char retry[BUFFER_SIZE];

    cout << "Your number must be 10 characters long" << "Would you like a rerty?? type RETRY";
    cin << setw(BUFFER_SIZE) >> typeRetry;

    if (isalpha(typeRetry))
    {

        if (strcmp("RETRY", typeRetry) != 0)
        {
            cout << "Thats not RETRY";
        }
        else
        {
            numberInput();
        }
    }
}

void numberInput()
{
    const size_t BUFFER_SIZE = 1024;
    char inputNumber[BUFFER_SIZE];

    cout << "Please enter phone number: ";
    cin >> setw(BUFFER_SIZE) >> inputNumber;
   // addContacts(inputNumber);

   if (strlen(inputNumber) < 10)
        cout << "Number cannot be less or greater than 10";
    else
        cout << "Saved !";
    
}

int main()
{
    numberInput();
    return 0;
}