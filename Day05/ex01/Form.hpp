/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 16:58:42 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/11 16:58:43 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
    public:
        class            GradeTooLowException : public std::exception{
                public:
                        virtual const char *what() throw();
        };
        class            GradeTooHighException : public std::exception{
                public:                
                        virtual const char *what() throw();
        };
        Form(std::string name, bool isItSigned, int grdReqToSign, int grdReqToExc);
        Form( const Form & src);
        ~Form( void );
        Form & operator=( Form const & rhs);
        
        std::string     GetName( void ) const;
        bool            GetIsItSigned( void ) const;
        int             GetGrdReqToSign() const;
        int             GetGrdReqToExc() const;
        void            beSigned(Bureaucrat &burea);
        void            setIsItSigned(bool isItSigned);
 
    private:
        std::string     _name;
        bool            _isItSigned;
        int             _grdReqToSign;
        int             _grdReqToExc;

            
};

std::ostream & operator << (std::ostream & o, Form const & rhs);


#endif
