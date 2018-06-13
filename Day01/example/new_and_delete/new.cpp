#include <iostream>
#include <string>

class Student
{
    private:
            std::string _login;

    public:
            Student(std::string login) : _login(login)
            {
                std::cout << "Student " << this->_login << " is born" << std::endl;
            }
            ~Student()
            {
                std::cout << "Student " << this->_login << " died" << std:: endl;
            }
};

int main(void)
{
    Student bob = Student("bfubar");
    Student* jim  = new Student("jfubar");

    delete jim;

    return (0);   
}