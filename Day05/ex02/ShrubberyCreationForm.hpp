/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:16:04 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/12 13:16:08 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <iostream> 
#include <string>
#include <fstream>

class ShrubberyCreationForm  : public Form
{
    private:
        std::string _target;
        int         _grdReqToSign;
        int         _grdReqToExc;
        
    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm(std::string target);        
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm   &operator=(ShrubberyCreationForm const  &rhs);
		bool			execute(Bureaucrat const & bureau) const;        
        std::string     getTarget( void );
};

#endif
