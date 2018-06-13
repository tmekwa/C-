/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:17:02 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/12 13:19:39 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;
		int         _grdReqToSign;
        int         _grdReqToExc;

	public:
	    PresidentialPardonForm( void );
        PresidentialPardonForm(std::string target);        
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm();

		PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs);
		bool			execute(Bureaucrat const & bureau) const;
		std::string		getTarget( void ) const;
};

#endif
