/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:21:09 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 15:43:51 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void    incrementGrade(Bureaucrat &b, int i)
{
        try
        {
                while (i > 0)
                {
                        b.incrementGrade();
                        i--;
                }
        } catch (const std::exception &e)
        {
                std::cout << b.getName() << " couldn't incrementGrade because: " << e.what() << std::endl;
        }
}

void    decrementGrade(Bureaucrat &b, int i)
{
        try
        {
                while (i > 0)
                {
                        b.decrementGrade();
                        i--;
                }
        } catch (const std::exception &e)
        {
                std::cout << b.getName() << " couldn't decrementGrade because: " << e.what() << std::endl;
        }
}

int main()
{

        Bureaucrat      bob("bob", 1);
        Intern          joe;

        std::cout << std::endl << "//////////////       FORMS TESTS     /////////////////" << std::endl;

        std::cout << std::endl << bob << std::endl;

        Form   *shrub = joe.makeForm("shrubbery creation", "shrubbery");
        Form     *robot = joe.makeForm("robotomy request", "robot");
        Form  *president = joe.makeForm("presidential pardon", "president");

        std::cout << std::endl;

        std::cout << *shrub << std::endl;
        std::cout << *robot << std::endl;
        std::cout << *president << std::endl;

        std::cout << std::endl;

        std::cout << " /// tests with low grade bureaucrat ////" << std::endl;
        
        {
                Bureaucrat      bab("bab", 150);
                

                std::cout << std::endl;

                bab.signForm(*shrub);
                bab.signForm(*robot);
                bab.signForm(*president);              
                
                std::cout << std::endl;

                bab.executeForm(*shrub);
                bab.executeForm(*robot);
                bab.executeForm(*president);

                std::cout << std::endl << "/// increment bureaucrat ////" << std::endl;

                incrementGrade(bab, 78);

                std::cout << bab << std::endl;

                std::cout << std::endl << "/// sign and execute ////" << std::endl;

                std::cout << std::endl;

                bab.signForm(*shrub);
                bab.signForm(*robot);
                bab.signForm(*president);
                
                std::cout << std::endl;

                bab.executeForm(*shrub);
                bab.executeForm(*robot);
                bab.executeForm(*president);
        }

        std::cout << std::endl << "/// sign and execute all forms ///" << std::endl;

        std::cout << bob << std::endl;

        bob.signForm(*shrub);
        bob.signForm(*robot);
        bob.signForm(*president);
        
        std::cout << std::endl;

        bob.executeForm(*shrub);
        bob.executeForm(*robot);
        bob.executeForm(*robot);
        bob.executeForm(*president);

        std::cout << std::endl;

        delete shrub;
        delete robot;
        delete president;

	return (0);
}
