/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 16:58:35 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/11 16:58:36 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char * Form::GradeTooLowException::what() throw()
{
    return ("Form too low. The grades ranges from 1 (highest possible) to 150 (lowest possible). ");    
}

const  char* Form::GradeTooHighException::what() throw()
{
    return ("Form too high. The grades ranges from 1 (highest possible) to 150 (lowest possible). ");
}

Form::Form(std::string name, bool isItSigned, int grdReqToSign, int grdReqToExc) : _name(name), _isItSigned(isItSigned), _grdReqToSign(grdReqToSign), _grdReqToExc(grdReqToExc)
{
    _grdReqToExc = _grdReqToSign;
    _isItSigned = false;
    return;
}
Form::Form( const Form & src)
{
    return;
}
Form::~Form( void )
{
    return;
}
Form & Form::operator=( Form const & rhs)
{
    this->_name = rhs._name;;
    this->_isItSigned = rhs._isItSigned;
    this->_grdReqToSign = rhs._grdReqToSign;
    this->_grdReqToExc = rhs._grdReqToExc;

    return *this;
}

std::string     Form::GetName( void ) const
{
    return this->_name;
}

void    Form::setIsItSigned(bool isItSigned)
{
    this->_isItSigned = isItSigned;
}    

bool     Form::GetIsItSigned( void ) const
{
    return this->_isItSigned;
}

int     Form::GetGrdReqToSign() const
{
    return this->_grdReqToSign;
}

int     Form::GetGrdReqToExc() const
{
    return this->_grdReqToExc;
}

void    Form::beSigned(Bureaucrat &burea)
{
    
    if ( burea.getGrade() < this->_grdReqToSign) {
        throw GradeTooHighException();                   
    }
    else if (burea.getGrade() > this->_grdReqToSign){
        /* code */
        throw GradeTooLowException();
    }
    else
    {
        setIsItSigned(true);
    }
    
}


std::ostream & operator << (std::ostream & o, Form const & rhs)
{
    //    if (rhs.GetIsItSigned() = true)
    if (rhs.GetIsItSigned() == true)
    {
        o << "State of form: " << rhs.GetName() << " Form is signed" << std::endl;
        
    }
    else if (rhs.GetIsItSigned() == false)
    {
        o << "State of form: " << rhs.GetName() << " Form is not signed" << std::endl;    
    }
    return o;        
}