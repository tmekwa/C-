/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:24:04 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/12 13:24:06 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target)
{
    this->_grdReqToSign = 145;
    this->_grdReqToExc = 137;
   
    return;
}  

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(ShrubberyCreationForm const  &rhs)
{
    this->_target = rhs._target;
    return *this;
}


std::string     ShrubberyCreationForm::getTarget( void )
{
    return this->_target;
}

bool			ShrubberyCreationForm::execute(Bureaucrat const & bureau) const
{
    if (bureau.getGrade() > this->_grdReqToExc)
    {
        ShrubberyCreationForm::GradeTooLowException();
        return false;        
    }
    else if (bureau.getGrade() < this->_grdReqToExc)
    {
        ShrubberyCreationForm::GradeTooHighException();
        return false;        
    }
    else
    {
        std::ifstream ifs("ascii");
        unsigned int dst;
        unsigned int dst2;
        std::string filename = this->_target + "_shrubbery";

        ifs >> dst >> dst2;

        std::cout << dst << " " << dst2 << std::endl;
        ifs.close();


        std::ofstream ofs(filename);
        ofs << "\n" <<
        "                       ,@@@@@@@,                        "
        "\n            ,,,.    ,@@@@@@/@@,  .oo8888o.            " 
        "\n         ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o           "
        "\n        ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'        "
        "\n       %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'          "
        "\n        %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'          "
        "\n        `&%\\ ` /%&'    |.|        \\ '|8'            "
        "\n            |o|        | |         | |                "
        "\n            |.|        | |         | |                "
        "\n            \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_  " << std::endl;        
        return true;
    }
}
