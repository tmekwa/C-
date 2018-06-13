/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 06:59:55 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/11 06:59:57 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    this->_max_grade = 150;
    this->_min_grade = 1;

    if (this->_grade > this->_max_grade)
        throw GradeTooHighException();
    else if (this->_grade < this->_min_grade)
        throw GradeTooLowException();

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

const char * Bureaucrat::GradeTooLowException::what() throw()
{
    return ("Grade too low. The grades ranges from 1 (highest possible) to 150 (lowest possible). ");    
}

const  char* Bureaucrat::GradeTooHighException::what() throw()
{
    return ("Grade too high. The grades ranges from 1 (highest possible) to 150 (lowest possible). ");
}
std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs)
{
    o <<  rhs.getName() << " bureaucrat grade " << rhs.getGrade();
    return o;
}