/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 07:00:13 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/11 07:00:16 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main()
{
    try
    {
        Bureaucrat objBureau("Thato", 14);

        RobotomyRequestForm roboto("roboto");
        PresidentialPardonForm president("president");
        ShrubberyCreationForm shrubberry("shrubberry");

        objBureau.executeForm(roboto);
        objBureau.signForm(roboto);
        srand(time(NULL));
       // Form f = Form("Appendix", false , 15, 0);

    
    }
    catch(Bureaucrat::GradeTooHighException & e)
    {
        std::cout << e.what() << '\n';
    }
    catch(Bureaucrat::GradeTooLowException & e)
    {
        std::cout << e.what() << '\n';
    }
    catch(Form::GradeTooHighException & e)
    {
        std::cout << e.what() << '\n';
    }
    catch(Form::GradeTooLowException & e)
    {
        std::cout << e.what() << '\n';
    }

}