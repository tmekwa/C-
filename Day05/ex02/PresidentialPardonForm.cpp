/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:16:24 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/12 13:16:53 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target)
{
    this->_grdReqToSign = 145;
    this->_grdReqToExc = 137;

    return;
}  

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
    return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return;
}

PresidentialPardonForm   &PresidentialPardonForm::operator=(PresidentialPardonForm const  &rhs)
{
    this->_target = rhs._target;
    return *this;
}


std::string     PresidentialPardonForm::getTarget( void ) const
{
    return this->_target;
}

bool			PresidentialPardonForm::execute(Bureaucrat const & bureau) const
{
    if (bureau.getGrade() > this->_grdReqToExc)
    {
        PresidentialPardonForm::GradeTooLowException();
        return false;
    }
    else if (bureau.getGrade() < this->_grdReqToExc)
    {
        PresidentialPardonForm::GradeTooHighException();
        return false;        
    }
    else
    {
        std::cout << this->_target << " is pardoned by Zafod Beeblebrox" << std::endl;         
        return false;        
    }
}
