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

#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main()
{
    try
    {
        Bureaucrat b = Bureaucrat("Thato", 15);
        Form f = Form("Appendix", false , 15, 0);
        std::cout << b << std::endl;                        
        b.signForm(f);        
        std::cout << f;
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