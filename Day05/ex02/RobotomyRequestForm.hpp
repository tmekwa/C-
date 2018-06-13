/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:20:37 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/12 13:22:56 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTO_MY_REQUEST_FORM_HPP
# define ROBOTO_MY_REQUEST_FORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;
		int         _grdReqToSign;
        int         _grdReqToExc;

	public:
	    RobotomyRequestForm( void );
        RobotomyRequestForm(std::string target);        
        RobotomyRequestForm( RobotomyRequestForm const & src);
        ~RobotomyRequestForm( void );

        RobotomyRequestForm   &operator=(RobotomyRequestForm const  &rhs);        
        bool			execute(Bureaucrat const & bureau) const;
        
        std::string     getTarget( void );		

};

#endif
