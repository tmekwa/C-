/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:19:50 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/12 13:20:32 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target)
{
    this->_grdReqToSign = 145;
    this->_grdReqToExc = 137;

    return;
}  

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
    return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
}

RobotomyRequestForm   &RobotomyRequestForm::operator=(RobotomyRequestForm const  &rhs)
{
    this->_target = rhs._target;
    return *this;
}


std::string     RobotomyRequestForm::getTarget( void )
{
    return this->_target;
}

bool			RobotomyRequestForm::execute(Bureaucrat const & bureau) const
{
    std::string status[] = {"Successfull", "Failed"};
    int random1 = rand() % 2 + 1; 
    
    if (bureau.getGrade() > this->_grdReqToExc)
    {
        RobotomyRequestForm::GradeTooLowException();
        return false;
    }
    else if (bureau.getGrade() < this->_grdReqToExc)
    {
        RobotomyRequestForm::GradeTooHighException();
        return false;        
    }
    else
    {
        std::cout << "ddddrrrrrrrrriiiiiilllllll" << std::endl;
        std::cout << _target << " robotomized " << status[random1] << std::endl;
        return true;
    }
}