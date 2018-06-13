/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 07:00:05 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/11 07:00:08 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
            int         _grade;
            std::string _name;
            int         _max_grade;
            int         _min_grade;
            int         _signValue;

    public:
        class            GradeTooLowException : public std::exception{
                public:
                virtual const char *what() throw();
        };
        class            GradeTooHighException : public std::exception{
                public:                
                virtual const char *what() throw();
        };

        Bureaucrat(std::string name, int grade);
        Bureaucrat(  Bureaucrat const & src);
        ~Bureaucrat( void );
        Bureaucrat & operator=( Bureaucrat const & rhs);
        void            setSignedForm( std::string f );
        int             getSignedValue( void ) const;
        std::string     getSignedForm( void ) const;
        
        std::string     getName( void ) const;
        int             getGrade( void ) const;
        void            incrementGrade(int grade);
        void            decrementGrade(int grade);
        void            signForm(Form &form);
        void            executeForm(Form const & form) const;

};

std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs);

#endif
