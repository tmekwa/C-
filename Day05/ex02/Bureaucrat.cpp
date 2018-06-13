/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 06:59:55 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/12 13:15:42 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

const char * Bureaucrat::GradeTooLowException::what() throw()
{
    return ("Grade too low. The grades ranges from 1 (highest possible) to 150 (lowest possible). ");    
}

const  char* Bureaucrat::GradeTooHighException::what() throw()
{
    return ("Grade too high. The grades ranges from 1 (highest possible) to 150 (lowest possible). ");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    this->_max_grade = 1;
    this->_min_grade = 150;

    if (this->_grade < this->_max_grade)
    {
        throw GradeTooLowException();
    }
    else if (this->_grade > this->_min_grade)
    {
        throw GradeTooHighException();
    }
    return;
}

Bureaucrat::Bureaucrat(  Bureaucrat const & src)
{
    return;
}

Bureaucrat::~Bureaucrat(void)
{
    return;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs)
{
    this->_grade = rhs._grade;
    this->_name = rhs._name;
    return *this;
}

std::string     Bureaucrat::getName( void ) const
{
    return this->_name;
}
int             Bureaucrat::getGrade( void ) const
{
    return this->_grade;
}
void            Bureaucrat::incrementGrade(int grade)
{
    this->_grade = grade;
    this->_grade++;
}
void            Bureaucrat::decrementGrade(int grade)
{
    this->_grade = grade;
    this->_grade = this->_grade -1; 
}

void            Bureaucrat::signForm(Form &form)
{

    if (this->_grade > form.GetGrdReqToSign())
    {
            std::cout << this->_name << " cannot sign  " << form.GetName() << " ";
            throw GradeTooLowException();
    }
    else if (this->_grade < form.GetGrdReqToSign())
    {
        std::cout << this->_name << " cannot sign  " << form.GetName() << " ";
        throw GradeTooHighException() ;
    }
    else
    {
        std::cout << this->_name << " signs " << form.GetName() << " Form" <<  std::endl;    
        form.beSigned(*this);
    }
}

void            Bureaucrat::executeForm(Form const & form) const
{
    const   bool    isItExecuatable = form.execute(*this);    
    if (isItExecuatable == true)
    {
        std::cout << this->_name << " executes " << form.GetName() << " form";
    }
    else
    {
        std::cout << this->_name << " could not execute " << form.GetName() << " form";        
    }
}


std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs)
{
    o <<  rhs.getName() << " bureaucrat grade " << rhs.getGrade();
    return o;
}
